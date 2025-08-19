#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(NlogN + 2N)
vector<int> findTwoElement(vector<int> &arr) {
    int n = arr.size();
    int repeating = -1, missing = -1;

    sort(arr.begin(), arr.end()); //O(NlogN)

    //Repeating - //O(N)
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) {
           repeating = arr[i];
        }
    }

    //Missing - O(N)
    for(int i = 0; i < n - 1; i++) {
        if(arr[i + 1] != arr[i] + 1) {
           missing = arr[i] + 1;
           break;
        }
    }

    //If last element is missing
    if(missing == -1) {
       missing = n;
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