#include <bits/stdc++.h>

using namespace std;

//TC: O(N), SC: O(N)
vector<int> leftRotate(vector<int> &arr, int n, int d) {
  vector<int> temp; 
  
  d = d % n;
  
  for(int i = 0; i < d; i++) { //O(d)
    temp[i] = arr[i];
  }
 
  for(int i = d; i < n; i++) { //O(n - d)
    arr[i - d] = arr[i];
  }  

  for(int i = n - d; i < n; i++) { //O()
    arr[i] = temp[i + (n - d)];
  }
  return temp;
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