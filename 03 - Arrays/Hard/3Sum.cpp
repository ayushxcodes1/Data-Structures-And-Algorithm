#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^3 * log(No. of unique triplets)), SC: O(2 * (No. of unique triplets)
vector<vector<int>> threeSum(vector<int> arr) {
    int n = arr.size();
    set<vector<int>> st;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end()); 
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

//Brute Force - TC: O(N^3 * log(No. of unique triplets)), SC: O(2 * (No. of unique triplets)
vector<vector<int>> threeSum2(vector<int> arr) {
    int n = arr.size();
    set<vector<int>> st;

    for(int i = 0; i < n; i++) {
        set<int> hashset;
        for(int j = i + 1; j < n; j++) {
            int third = -(arr[i] + arr[j]);
            if(hashset.find(third) != hashset.end()) {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end()); 
                st.insert(temp);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
  vector<int> arr = {-1, 0, 1, 2, -1, 4};
  vector<vector<int>> ans = threeSum(arr);
  for(auto it : ans) {
    for(auto ele : it) {
        cout << ele << " ";
    }
    cout << endl;
  }
  return 0;
}