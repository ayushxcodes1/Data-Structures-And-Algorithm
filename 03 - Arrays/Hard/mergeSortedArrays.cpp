#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O((M + N) log(M + N)), SC: O(M + N)
vector<int> merge(vector<int> &arr, vector<int> arr2, int m, int n) {
    int p1 = arr[0];
    int p2 = arr2[0];
    vector<int> ans;

    //O(m)
    for(int i = 0; i < m; i++) {
        ans.push_back(arr[i]);
    }

    //O(n)
    for(int i = m; i < m + n; i++) {
        ans.push_back(arr2[i - m]);
    }

    //O((M+N)log(M+N))
    sort(ans.begin(), ans.end());
    return ans;
}

//Better 
vector<int> merge2(vector<int> &arr, vector<int> arr2, int m, int n) {
    int p1 = 0, p2 = 0;
    vector<int> ans;

    while(p1 < m && p2 < n) {
        
    }

    return ans;
}

int main() {
  vector<int> arr = {1, 2, 3, 0, 0, 0};
  vector<int> arr2 = {2, 5, 6};
  int m = 3, n = 3;

  vector<int> ans = merge(arr, arr2, m, n);
  for(auto it : ans) {
    cout << it << " ";
  }
  return 0;
}