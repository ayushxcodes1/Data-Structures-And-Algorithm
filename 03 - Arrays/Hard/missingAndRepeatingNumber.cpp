#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(NlogN + N), SC: O(1)
vector<int> findTwoElement(vector<int> &arr) {
    sort(arr.begin(), arr.end()); //O(NlogN)

    int n = arr.size();
    int repeating = -1, missing = -1;

    //Repeating - //O(N)
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) {
           repeating = arr[i];
        }
    }

    //Missing - O(N)
    int x = 1; 
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
           x++;                       
        }
        else if(arr[i] < x) {
           continue;                
        }
        else {                    
            missing = x;
            break;
        }
    }

    //If last element is missing
    if(missing == -1) {
       missing = x;
    }

    return {repeating, missing};
}


//Better - TC: O(N^2), SC: O(1)  
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


int main() {
  vector<int> arr = {4, 3, 6, 2, 1, 1};
  vector<int> ans = findTwoElement(arr);

  for(auto it : ans) {
    cout << it << " ";
  }
 
  return 0;
}