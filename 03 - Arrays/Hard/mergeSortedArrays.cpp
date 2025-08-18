#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O((M + N) log(M + N)), SC: O(1)
void merge(vector<int> &arr1, vector<int> arr2, int m, int n) {
    for(int j = 0, i = m; j < n; j++) {
        arr1[i] = arr2[j];
        i++;
    }

    sort(arr1.begin(), arr1.end());
}

//Better - TC: O(M + N), SC: O(M + N)
void merge2(vector<int> &arr1, vector<int> arr2, int m, int n) {
    int left = 0, right = 0;
    vector<int> ans;
    
    //O(min(M, N))
    while(left < m && right < n) {
        if(arr1[left] <= arr2[right]) {
           ans.push_back(arr1[left]);
           left++;
        }
        else {
           ans.push_back(arr2[right]);
           right++;
        }
    }

    //O(M)
    while(left < m) {
        ans.push_back(arr1[left]);
        left++;
    }

    //O(N)
    while(right < n) {
        ans.push_back(arr2[right]);
        right++;
    }

    //O(M + N)
    for(int i = 0; i < n + m; i++) {
        arr1[i] = ans[i];
    }
}

//Optimal - TC: O(M + N), SC: O(1) - 3 Pointer Approach
vector<int> merge3(vector<int> &arr1, vector<int> arr2, int m, int n) {
    int i = m - 1; //last index of arr1's valid part
    int j = n - 2; //last index of arr2
    int k = m + n - 1; //last index of arr1
    
    while(i >= 0 && j >= 0) {
        if(arr1[i] > arr2[j]) {
           arr1[k] = arr1[i];
           i--;
        } 
        else {
           arr1[k] = arr2[j];
           j--;
        }
        k--;
    }

    while(j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}

int main() {
  vector<int> arr1 = {1, 2, 3, 0, 0, 0};
  vector<int> arr2 = {2, 5, 6};
  int m = 3, n = 3;

  merge(arr1, arr2, m, n);
  for(auto it : arr1) {
    cout << it << " ";
  }

  cout << endl;

  arr1 = {1, 2, 3, 0, 0, 0};
  merge2(arr1, arr2, m, n);
  for(auto it : arr1) {
    cout << it << " ";
  }

  cout << endl;

  arr1 = {1, 2, 3, 0, 0, 0};
  merge3(arr1, arr2, m, n);
  for(auto it : arr1) {
    cout << it << " ";
  }
  return 0;
}