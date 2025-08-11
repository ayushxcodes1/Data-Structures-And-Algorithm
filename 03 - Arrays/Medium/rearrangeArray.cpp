#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            //If +ve on correct place
            if(arr[i] > 0 && (i % 2 == 0)) {
               break;
            }

            //If -ve on correct place
            else if(arr[i] < 0 && (i % 2 != 0)) {
               break;
            }

            //If Negative number on Even Index
            else if(arr[i] < 0 && (i % 2 == 0)) {
                if(arr[j] > 0) {
                   swap(arr[i], arr[j]); 
                   break;
                }
            }
            //If Positive number on Odd Index
            else if(arr[i] > 0 && (i % 2 != 0)) {
                if(arr[j] < 0) {
                   swap(arr[i], arr[j]); 
                   break;
                }
            }
        }
    }
    return arr;
}

int main() {
  vector<int> arr = {-3, -1, 2, -5, 4, 8};
  vector<int> res = rearrangeArray(arr);
  for(auto it : res) {
    cout << it << " ";
  }
  return 0;
}