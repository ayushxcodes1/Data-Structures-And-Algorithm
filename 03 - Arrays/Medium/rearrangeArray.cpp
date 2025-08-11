#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        bool shouldBePositive = (i % 2 == 0);

        // If number at i is already correct, skip
        if((shouldBePositive && arr[i] > 0) || (!shouldBePositive && arr[i] < 0)) {
            continue;
        }

        // Otherwise, find the next opposite sign to swap
        for(int j = i + 1; j < n; j++) {
            if((shouldBePositive && arr[i] > 0) || (!shouldBePositive && arr[j] < 0)) {
                swap(arr[i], arr[j]);
                break;
            }
        }
    }
    return arr;
}

int main() {
  vector<int> arr = {-3, -1, 2, -5, 4, 8};
  vector<int> res = rearrangeArray(arr);
  for(auto it : res) {
    cout << it << " ";
  }
  return 0;
}