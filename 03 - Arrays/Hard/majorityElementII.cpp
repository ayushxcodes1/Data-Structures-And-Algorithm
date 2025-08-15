#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
vector<int> majorityElementII(vector<int> arr) {
    int n = arr.size();
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        if(ans.size() == 0 || ans[0] != arr[i]) {     
            int cnt = 0;
            for(int j = i; j < n; j++) {
                if(arr[j] == arr[i]) {
                   cnt++;
                }
            }
            if(cnt > (n / 3)) {
               ans.push_back(arr[i]);
            }
        }
        if(ans.size() == 2) break;
    }
    return ans;
}

//Better - TC: O(NlogN), SC: O(N)
vector<int> majorityElementII(vector<int> arr) {
    int n = arr.size();
    vector<int> ans;
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
        if(mpp[arr[i]] > (n / 3)) {
           ans.push_back(arr[i]);
        }
        if(ans.size() == 2) break;  
    }
    return ans;
}

int main() {
  vector<int> arr = {1, 1, 1, 2, 2, 2};  
  vector<int> ans = majorityElementII(arr);
  for(auto it : ans) {
    cout << it << " ";
  }
  return 0;
}