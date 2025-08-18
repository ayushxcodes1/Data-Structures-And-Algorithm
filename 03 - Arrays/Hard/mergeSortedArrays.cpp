#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(M + N), SC: O(M + N)
void merge(vector<int> &arr1, vector<int> arr2, int m, int n) {
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

//Optimal1 - TC: O(M + N), SC: O(1) - 3 Pointer Approach
vector<int> merge2(vector<int> &arr1, vector<int> arr2, int m, int n) {
    int i = m - 1; //last index of arr1's valid part
    int j = n - 1; //last index of arr2
    int k = m + n - 1; //last index of arr1
    
    //O(M + N)
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

    //copy leftover arr2(if any) - O(M)
    while(j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}

//Optimal2 - TC: O(M + N), SC: O(1) - Gap Method
vector<int> merge3(vector<int> &arr1, vector<int> arr2, int m, int n) {
    
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