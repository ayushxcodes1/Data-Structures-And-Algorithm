#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^4), SC: O(no. of quadruplets * 2)
vector<vector<int>> fourSum(vector<int> arr, int target) {
    int n = arr.size();
    set<vector<int>> st;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                for(int l = k + 1; l < n; l++) {
                    long long sum = (long long)arr[i] + arr[j];
                    sum += arr[k];
                    sum += arr[l];
                    if(sum == target) {
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        sort(temp.begin(), temp.end()); 
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

//Better - TC: O(N^3), SC: O(N + (no. of quadruplets * 2))
vector<vector<int>> fourSum2(vector<int> arr, int target) {
    int n = arr.size();
    set<vector<int>> st;    

    for(int i = 0; i < n; i++) {
        set<long long> hashset;
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                long long sum = (long long)arr[i] + arr[j] + arr[k];
                long long fourth = target - (sum);
                if(hashset.find(fourth) != hashset.end()) {
                    vector<int> temp = {arr[i], arr[j], arr[k], (int)fourth};
                    sort(temp.begin(), temp.end()); 
                    st.insert(temp);
                }
                hashset.insert(arr[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
  vector<int> arr = {-1, 0, -1, 0, -2, 2};

  vector<vector<int>> ans = fourSum(arr, 0);
  for(auto it : ans) {
    for(auto ele : it) {
        cout << ele << " ";
    }
    cout << endl;
  }

  cout << endl;

  vector<vector<int>> ans2 = fourSum2(arr, 0);
  for(auto it : ans2) {
    for(auto ele : it) {
        cout << ele << " ";
    }
    cout << endl;
  }
  
  return 0;
}