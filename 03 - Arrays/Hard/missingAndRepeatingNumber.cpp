#include <bits/stdc++.h>

using namespace std;

vector<int> findTwoElement(vector<int> &arr) {
    int n = arr.size();
    int repeating = -1;
    int missing = -1;

    sort(arr.begin(), arr.end()); 

    //Repeating
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) {
           repeating = arr[i];
        }
    }

    //Missing
    for(int i = 0; i < n; i++) {
        if(arr[i + 1] != arr[i] || arr[i] + 1 != arr[i + 1]) {
           missing = arr[i] + 1;
        }
    }

    return {repeating, missing};
}

int main() {
  vector<int> arr = {4, 3, 6, 2, 1, 1};
  vector<int> ans = findTwoElement(arr);
  
  for(auto it : ans) {
    cout << it << " ";
  }
 
  return 0;
}