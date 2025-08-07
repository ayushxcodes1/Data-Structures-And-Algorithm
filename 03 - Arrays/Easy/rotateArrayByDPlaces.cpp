#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(n + d), SC: O(d)
void leftRotate(vector<int> &arr, int n, int d) {

  vector<int> temp; 
  
  // Pushing first d elements to temporary array - O(d)
  for(int i = 0; i < d; i++) { 
    temp.push_back(arr[i]);
  }
 
  //Shifting rest of the elements to the left - O(n - d)
  for(int i = d; i < n; i++) { 
    arr[i - d] = arr[i];
  }  

  // Pushing back the elements from temporary array - O(d)
  for(int i = n - d; i < n; i++) {
    arr[i] = temp[i - (n - d)];
  }
}

//Optimal - TC: O(), SC: O(1)
void leftRotate2(vector<int> &arr, int n, int d) {
  reverse(arr.begin(), arr.begin() + d);
  reverse(arr.begin() + d, arr.end());
  reverse(arr.begin(), arr.end());
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int n = arr.size();

  leftRotate2(arr, n, 3);

  for(auto it : arr) {
    cout << it << " ";
  }

  return 0;
}