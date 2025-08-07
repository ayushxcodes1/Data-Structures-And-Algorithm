#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(n1 + n2) * log(n1 + n2), SC: O(2 * (n1 + n2))
vector<int> findUnion(vector<int> a, vector<int> b) {
  int n1 = a.size();
  int n2 = b.size();

  set<int> st; //O(n1 + n2)

  for(int i = 0; i < n1; i++) {
    st.insert(a[i]);  //O(log n1)
  }

  for(int i = 0; i < n2; i++) { 
    st.insert(b[i]); //O(log n2)
  }

  vector<int> unionArr; //O(n1 + n2)
  for(auto it : st) {
    unionArr.push_back(it); //O(n1 + n2)
  }

  return unionArr;
}

//Optimal - TC: O(n1 + n2), SC: O(n1 + n2)
vector<int> findUnion2(vector<int> a, vector<int> b) {
  int n1 = a.size();
  int n2 = b.size();

  vector<int> unionArr;

  int i = 0, j = 0;

  while(i < n1 && j < n2) {
    if(a[i] <= b[j]) {
      if(unionArr.empty() || unionArr.back() != a[i]) {
        unionArr.push_back(a[i]);
      }
      i++;
    }
    else {
      if(unionArr.empty() || unionArr.back() != b[j]) {
        unionArr.push_back(b[j]);
      }
      j++;
    }
  }

  while(i < n1) {
    if(unionArr.empty() || unionArr.back() != a[i]) {
      unionArr.push_back(a[i]);
    }
    i++;
  }

  while(j < n2) {
    if(unionArr.empty() || unionArr.back() != b[j]) {
      unionArr.push_back(b[j]);
    }
    j++;
  }
  
  return unionArr;
}

int main() {
  vector<int> a = {2, 2, 3, 4, 5};
  vector<int> b = {1, 1, 2, 3, 4};

  vector<int> res = findUnion2(a, b);

  for(auto it : res) {
    cout << it << " ";
  }
  return 0;
}