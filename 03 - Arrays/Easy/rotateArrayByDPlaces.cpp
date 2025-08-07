#include <bits/stdc++.h>

using namespace std;

//TC: O(n + d), SC: O(d)
void leftRotate(vector<int> &arr, int n, int d) {
  
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
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int n = arr.size();

  leftRotate(arr, n, 3);

  return 0;
}