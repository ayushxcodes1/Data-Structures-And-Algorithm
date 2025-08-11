#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            //Negative number on Even Index
            if(arr[i] < 0 && (i % 2 == 0)) {
                if(arr[j] > 0) {
                   swap(arr[i], arr[j]); 
                   break;
                }
            }
            else if(arr[i] > 0 && (i % 2 != 0))
        }
    }
}

int main() {
  vector<int> arr = {-3, -1, 2, -5, 4, 8};
  
  return 0;
}