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

//Optimal
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

int main() {
  vector<int> a = {2, 2, 3, 4, 5};
  vector<int> b = {1, 1, 2, 3, 4};

  vector<int> res = findUnion(a, b);

  for(auto it : res) {
    cout << it << " ";
  }
  return 0;
}