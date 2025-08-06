#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(NlogN + N), SC: O(N)
int removeDuplicates(vector<int> &arr, int n) {
    set<int> st;
    
    for(int i = 0; i < n - 1; i++) {
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto it : st) {
        arr[index] = it;
        index++;
    }

    return index;
}

//Optimal - TC: O(N), SC: O(1)
int removeDuplicates2(vector<int> &arr, int n) {
    int i = 0;
    for(int j = i + 1; j < n; j++) {
        if(arr[j] != arr[i]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main() {
  vector<int> arr = {1, 2, 2, 3, 4, 5, 5};
  int n = arr.size();
  int res = removeDuplicates2(arr, n);
  cout << res;
  return 0;
}