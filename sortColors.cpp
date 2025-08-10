#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(NlogN), SC: O(N)
vector<int> sortColors(vector<int> &arr) {
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    return temp;
}

//Better - TC: O(N), SC: O(1)
vector<int> sortColors2(vector<int> &arr) {
    int n = arr.size();
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) cnt0++;
        if(arr[i] == 1) cnt1++;
        if(arr[i] == 2) cnt2++;
    }

    for(int i = 0; i < n; i++) {
        if(cnt0 != 0) {
           arr[i] = 0;
           cnt0--;
        }
        else if(cnt1 != 0) {
            arr[i] = 1;
            cnt1--;
        }
        else {
            arr[i] = 2;
            cnt2--;
        }
    }
}

int main() {
    vector<int> arr = {2, 0, 1, 1, 0};
    vector<int> res = sortColors(arr);
    for(auto it : res) {
        cout << it << " ";
    }

    /*
    sortColors2(arr);
    for(auto it : arr) {
        cout << it << " ";
    }
    */

  return 0;
}