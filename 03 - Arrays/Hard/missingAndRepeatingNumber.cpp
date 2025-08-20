#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)  
vector<int> findTwoElement(vector<int> arr) {
    int n = arr.size();
    int repeating = -1, missing = -1;

    for(int i = 1; i <= n; i++) {
        int cnt = 0; 
        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
               cnt++;
            }
        }
        if(cnt == 2) {
            repeating = i;
        } else if(cnt == 0) {
            missing = i;
        }
        
        if(repeating != -1 && missing != -1) {
           break;
        }
    }
    return {repeating, missing};
}

//Better - TC: O(2N), SC: O(N) - Hashing
vector<int> findTwoElement2(vector<int> arr) {
    int n = arr.size();
    vector<int> hash(n + 1);

    //O(N)
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++; 
    }

    //O(N)
    int repeating = -1, missing = -1;
    for(int i = 1; i <= n; i++) {
        if(hash[i] == 2) repeating = i;
        else if(hash[i] == 0) missing = i;

        if (repeating != -1 && missing != -1) {
            break;
        }
    }
    return {repeating, missing};
}


//Optimal1 - TC: O(N), SC: O(1) - Mathematical
vector<int> findTwoElement3(vector<int> arr) {
    long long n = arr.size();
    //S - SN = x - y
    //S2 - S2N
    
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2*n+1)) / 6;
    long long S = 0, S2 = 0;
    for(int i = 0; i < n; i++) {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i];
    }
    long long val1 = S - SN; //x - y
    long long val2 = S2 - S2N;
    val2 = val2 / val1; //x + y
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return {(int)x, (int)y};
}

//Optimal2 - TC: O(N), SC: O(1) - XOR
vector<int> findTwoElement4(vector<int> arr) {
    
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

  cout << endl;

  vector<int> ans2 = findTwoElement2(arr);
  for(auto it : ans2) {
    cout << it << " ";
  }

  cout << endl;

  vector<int> ans2 = findTwoElement2(arr);
  for(auto it : ans2) {
    cout << it << " ";
  }
 
  return 0;
}