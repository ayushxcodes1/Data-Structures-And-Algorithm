#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
int reversePairs(vector<int> &arr) {
    int n = arr.size();
    int cnt = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > 2 * arr[j]) {
               cnt++;
            }
        }
    }
    return cnt;
}

//Optimal - TC: O(2N * logN), SC: O(N)
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
           temp.push_back(arr[left]);
           left++;
        }
        else {
           temp.push_back(arr[right]);
           right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

int countPairs(vector<int> &arr, int low, int mid, int high) {
    int right = mid + 1;
    int cnt  = 0;
    for(int i = low; i <= mid; i++) {
        while(right <= high && (long long)arr[i] > 2 * (long long)arr[right]) right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
}

int mS(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if(low >= high) return cnt;
    int mid = (low + high) / 2;
    cnt += mS(arr, low, mid);  
    cnt += mS(arr, mid + 1, high);
    cnt += countPairs(arr, low, mid, high);
    merge(arr, low, mid, high);
    return cnt;
}

int reversePairs2(vector<int> arr, int n) {
    return mS(arr, 0, n - 1);
}

int main() {
  vector<int> arr = {40, 25, 19, 12, 9, 6, 2};
  int n = arr.size();

  int ans = reversePairs(arr);
  cout << ans;

  cout << "\n";

  int ans2 = reversePairs2(arr, n);
  cout << ans2;

  return 0;
}