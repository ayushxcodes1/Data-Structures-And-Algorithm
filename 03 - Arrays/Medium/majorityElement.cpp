#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
int majorityElement(vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] == arr[i]) {
               cnt++;
            }
        } 
        if(cnt > (n / 2)) return arr[i];
    }

    return -1;
}

//Better - TC: O(NlogN + N), SC: O(N)
int majorityElement2(vector<int> arr) {
    int n = arr.size();
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp) {
        if(it.second > (n / 2)) {
           return it.first;
        }
    }
    return -1;
}

//Optimal - TC: O(2N), SC: O(1)
int majorityElement3(vector<int> arr) {
    int n = arr.size();
    int cnt = 0;
    int ele;
    for(int i = 0; i < n; i++) {
        if(cnt == 0) {
           cnt = 1;
           ele = arr[i];
        }
        else if(arr[i] == ele) {
           cnt++;
        }
        else cnt--;
    }

    //If majority element not always exist
    int cnt1 = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == ele) cnt1++;
    }
    if(cnt1 > (n / 2)) {
       return ele;
    }
    return -1;
}

int main() {
  vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
  int res = majorityElement(arr);
  cout << "Majority Element: " << res;

  cout << endl;

  int res2 = majorityElement2(arr);
  cout << "Majority Element: " << res2;

  cout << endl;

  int res3 = majorityElement3(arr);
  cout << "Majority Element: " << res3;

  return 0;
}