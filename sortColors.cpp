#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(NlogN), SC: O(N)
vector<int> sortColors(vector<int> arr) {
    int n = arr.size();
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    return temp;
}

//Better - TC: O(2N), SC: O(1)
vector<int> sortColors2(vector<int> &arr) {
    int n = arr.size();
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for(auto num : arr) {
        if(num == 0) cnt0++;
        else if(num == 1) cnt1++;
        else cnt2++;
    }
 
    int i = 0;
    while(cnt0--) arr[i++] = 0;
    while(cnt1--) arr[i++] = 1;
    while(cnt2--) arr[i++] = 2;
}

//Optimal - TC: O(N), SC: O(1)
vector<int> sortColors2(vector<int> &arr) {
    int n = arr.size();
    
}

int main() {
    vector<int> arr = {2, 0, 1, 1, 0};
    
    vector<int> res = sortColors(arr);
    for(auto it : res) {
        cout << it << " ";
    }

    cout << endl;

    sortColors2(arr);
    for(auto it : arr) {
        cout << it << " ";
    }
    
  return 0;
}