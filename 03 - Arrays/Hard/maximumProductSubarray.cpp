#include <bits/stdc++.h>

using namespace std;
 
//Brute Force - TC: O(N^2), SC: O(1)
int maxProduct(vector<int> &arr) {
  int n = arr.size();
  int maxProd = INT_MIN;
  for(int i = 0; i < n; i++) {
    int prod = 1;
    for(int j = i; j < n; j++) {
      prod = prod * arr[j];
      maxProd = max(prod, maxProd);
    }
  }
  return maxProd;
}

//Optimal1 - TC: O(N), SC: O(1) - Observation Based(Intuitive) 
int maxProduct2(vector<int> &arr) {
  int n = arr.size();
  int ans = INT_MIN;
  int pre = 1, suff = 1;
  for(int i = 0; i < n; i++) {
    if(pre == 0) pre = 1;
    if(suff == 0) suff = 1;

    pre = pre * arr[i];
    pre = suff * arr[n-i-1];
    ans = max(ans, max(pre, suff));
  }
  return ans;
}

//Optimal2 - TC: O(N), SC: O(1) - Kadane's Algorithm
int maxProduct3(vector<int> &arr) {
  int n = arr.size();
  int currMax = arr[0], currMin = arr[0];
  int ans = arr[0];

  for(int i = 1; i < n; i++) {
    int temp = max({arr[i], currMax * arr[i], currMin * arr[i]});
    currMin = min({arr[i], currMax * arr[i], currMin * arr[i]});
    currMax = temp;

    ans = max(ans, currMax);
  }
  return ans;
}

int main() {
  vector<int> arr = {2, 3, -2, 4};
  int ans = maxProduct(arr);
  cout << ans << " ";

  cout << endl;

  int ans2 = maxProduct(arr);
  cout << ans2 << " ";

  cout << endl;

  int ans3 = maxProduct3(arr);
  cout << ans3 << " ";

  return 0;
}