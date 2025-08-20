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

//Merge Sort
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

void mS(vector<int> &arr, int low, int high) {
    if(low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);  
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

//Optimal - TC: O(NlogN + N), SC: O(N)
int reversePairs2(vector<int> &arr, int n) {
    mS(arr, 0, n - 1);
}

int main() {
  vector<int> arr = {40, 25, 19, 12, 9, 6, 2};
  int n = arr.size();

  int ans = reversePairs(arr, n);
  cout << ans;

  cout << "\n";

  int ans2 = reversePairs2(arr, n);
  cout << ans2;

  return 0;
}