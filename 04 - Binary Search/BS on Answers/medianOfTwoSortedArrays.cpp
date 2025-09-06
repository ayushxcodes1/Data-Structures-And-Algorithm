#include <bits/stdc++.h>

using namespace std;

//Brute Force
int findMedian(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size(); 
    int n2 = arr2.size();
    
    
}

int main() {
  vector<int> arr1 = {1, 3, 4, 7, 10, 12};
  vector<int> arr2 = {2, 3, 6, 15}; 

  int ans = findMedian(arr1, arr2);
  cout << "Median is " << ans;

  return 0;
}