#include <bits/stdc++.h>

using namespace std;

//TC: O(n + d), SC: O(d)
vector<int> leftRotate(vector<int> &arr, int n, int d) {
  d = d % n;
  
  int temp[d]; 
  
  // Pushing first d elements to temporary array - O(d)
  for(int i = 0; i < d; i++) { 
    temp[i] = arr[i];
  }
 
  //Shifting rest of the elements to the left - O(n - d)
  for(int i = d; i < n; i++) { 
    arr[i - d] = arr[i];
  }  

  // Pushing back the elements from temporary array - O(d)
  for(int i = n - d; i < n; i++) {
    arr[i] = temp[i - (n - d)];
  }

  return arr;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int n = arr.size();

  vector<int> res = leftRotate(arr, n, 3);

  for(auto it : res) {
    cout << it << " ";
  }

  return 0;
}