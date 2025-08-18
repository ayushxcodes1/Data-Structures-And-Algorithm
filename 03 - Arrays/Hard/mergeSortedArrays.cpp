#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(M + N), SC: O(M + N)
vector<int> merge(vector<int> &arr1, vector<int> arr2, int m, int n) {
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

    //O(N + M)
    for(int i = 0; i < n + m; i++) {
        arr1[i] = ans[i];
    }

    return arr1;
}

//Optimal - TC: O(M + N), SC: O(1)
vector<int> merge2(vector<int> &arr1, vector<int> arr2, int m, int n) {
    int p = 0;
    for(int i = 0; i < m + n; i++) {
        if(arr1[i] > arr2[p]) {
           arr1[i + 1] = arr1[i];
           arr1[i] = arr2[p];

           p++;
        }
        if(arr1[i] == 0) {
           arr1[i] = arr2[p];
           p++;
        }
    }
    return arr1;
}

int main() {
  vector<int> arr1 = {1, 2, 3, 0, 0, 0};
  vector<int> arr2 = {2, 5, 6};
  int m = 3, n = 3;

  vector<int> ans = merge(arr1, arr2, m, n);
  for(auto it : ans) {
    cout << it << " ";
  }

  cout << endl;

//   vector<int> ans2 = merge2(arr1, arr2, m, n);
//   for(auto it : ans2) {
//     cout << it << " ";
//   }
  return 0;
}