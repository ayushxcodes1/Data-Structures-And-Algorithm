#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(NlogN), SC: O(1)
vector<int> sortColors(vector<int> &arr) {
    sort(arr.begin(), arr.end());
}

//Better - TC: O(N), SC: O(1)
vector<int> sortColors2(vector<int> &arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    while(left < right) {
        if(arr[left] > arr[right]) {
           swap(arr[left], arr[right]);
        }
        left++;
        right--;
    }
}

int main() {
    vector<int> arr = {2, 0, 1, 1, 0};
    sortColors(arr);
    for(auto it : arr) {
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