#include <bits/stdc++.h>

using namespace std;

//Optimal - TC: O(N), SC: O(1)
int findMaxConsecutiveOnes(vector<int> arr) {
    int n = arr.size();
    int count = 0, maxCount = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            count++;
            maxCount = max(count, maxCount);
        } 
        else {
            count = 0;
        }
    }
    maxCount = max(count, maxCount);

    return maxCount;
}

int main() {
  vector<int> arr = {1, 1, 0, 1, 1, 1};
  int n = arr.size();
  int res = findMaxConsecutiveOnes(arr);
  cout << "Maximum Consecutive Ones: " << res;
  return 0;
}