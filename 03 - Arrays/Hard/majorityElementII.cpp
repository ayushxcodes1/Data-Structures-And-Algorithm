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
vector<int> majorityElementII2(vector<int> arr) {
    int n = arr.size();
    vector<int> ans;
    map<int, int> mpp;

    int mini = (int)(n / 3) + 1;

    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;

        if(mpp[arr[i]] == mini) {
           ans.push_back(arr[i]);
        }
        if(ans.size() == 2) break;  
    }
    return ans;
}

//Optimal - TC: O(2N), SC: O(1)
vector<int> majorityElementII3(vector<int> arr) {
    int n = arr.size();
    int cnt1 = 0, cnt2 = 0;
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(cnt1 == 0 && ele2 != arr[i]) {
           cnt1 = 1;
           ele1 = arr[i];
        }
        else if(cnt2 == 0 && ele1 != arr[i]) {
           cnt2 = 1;
           ele2 = arr[i];
        }
        else if(arr[i] == ele1) cnt1++;
        else if(arr[i] == ele2) cnt2++;
        else {
            cnt1--, cnt2--;
        }
    }
    vector<int> ans;
    cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {
        if(ele1 == arr[i]) cnt1++;
        if(ele2 == arr[i]) cnt2++;
    }

    int mini = (int)(n / 3) + 1;
    if(cnt1 >= mini) ans.push_back(ele1); 
    if(cnt2 >= mini) ans.push_back(ele2); 

    return ans;
}

int main() {
  vector<int> arr = {1, 1, 1, 2, 2, 2};  
  vector<int> ans = majorityElementII(arr);
  for(auto it : ans) {
    cout << it << " ";
  }

  vector<int> ans2 = majorityElementII2(arr);
  for(auto it : ans2) {
    cout << it << " ";
  }

  vector<int> ans3 = majorityElementII3(arr);
  for(auto it : ans3) {
    cout << it << " ";
  }
  return 0;
}