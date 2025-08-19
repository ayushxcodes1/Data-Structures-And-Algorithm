#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)  
vector<int> findTwoElement(vector<int> &arr) {
    int n = arr.size();
    int repeating = -1, missing = -1;

    for(int i = 1; i < n; i++) {
        int cnt = 0; 
        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
               cnt++;
            }
            if(cnt == 2) repeating = i;
            else if(cnt == 0) missing = i;
        }
        if(repeating != -1 && missing != -1) {
           break;
        }
    }

    return {repeating, missing};
}

//Better - TC: O(2N), SC: O(N) - Hashing
vector<int> findTwoElement2(vector<int> &arr) {
    int n = arr.size();
    int repeating = -1, missing = -1;
    vector<int> hash(n + 1);

    //O(N)
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++; 
    }

    //O(N)
    for(int i = 1; i < n; i++) {
        if(hash[arr[i]] == 2) repeating = i;
        if(hash[arr[i]] == 0) missing = i;
    }
    
    return {repeating, missing};
}

int main() {
  vector<int> arr = {4, 3, 6, 2, 1, 1};

  vector<int> ans = findTwoElement(arr);
  for(auto it : ans) {
    cout << it << " ";
  }

  cout << endl;

  vector<int> ans2 = findTwoElement2(arr);
  for(auto it : ans2) {
    cout << it << " ";
  }
 
  return 0;
}