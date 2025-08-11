#include <bits/stdc++.h>

using namespace std;

/* Variety 1 - positives & negatives are equal */

//Brute Force - TC: O(N + N/2), SC: O(N)
vector<int> rearrangeArray(vector<int> arr) {
    int n = arr.size();
    vector<int> pos, neg;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
           pos.push_back(arr[i]);
        }
        else {
           neg.push_back(arr[i]);
        }
    }

    for(int i = 0; i < (n / 2); i++) {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
    return arr;
}

//Optimal - TC: O(N), SC: O(N)
vector<int> rearrangeArray2(vector<int> arr) {
    int n = arr.size();
    vector<int> ans(n);
    int posIndex = 0, negIndex = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
           ans[negIndex] = arr[i];
           negIndex += 2;
        }
        else {
           ans[posIndex] = arr[i];
           posIndex += 2;
        }
    }
    return ans;
}

/* Variety 2 - positives & negatives are not equal */

//Brute Force - TC: O(2N), SC: O(N)
vector<int> rearrangeArray3(vector<int> arr) {
    int n = arr.size();
    vector<int> pos, neg;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
           pos.push_back(arr[i]);
        }
        else {
           neg.push_back(arr[i]);
        }
    }

    if(pos.size() > neg.size()) {
        for(int i = 0; i < neg.size(); i++) {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }

        int index = neg.size() * 2;
        for(int i = neg.size(); i < pos.size(); i++) {
            arr[index] = pos[i];
            index++;
        }
    }
    else {
        for(int i = 0; i < pos.size(); i++) {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }

        int index = pos.size() * 2;
        for(int i = pos.size(); i < neg.size(); i++) {
            arr[index] = neg[i];
            index++;
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

  cout << endl;

  vector<int> res2 = rearrangeArray2(arr);
  for(auto it : res2) {
    cout << it << " ";
  }

  cout << endl;

  vector<int> arr2 = {-3, -1, 2, -5, 4, 8, -6};
  vector<int> res3 = rearrangeArray3(arr2);
  for(auto it : res3) {
    cout << it << " ";
  }
  
  return 0;
}