#include <bits/stdc++.h>

using namespace std;

//Brute Force
int findMedian(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size(); 
    int n2 = arr2.size();
    vector<int> temp(n1 + n2, 0);

    int i = 0, j = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] > arr2[j]) {
           temp.push_back(arr1[i]);
           i++;
        }
        else {
           temp.push_back(arr2[j]);
           j++;
        }
    }

    //push leftover from arr1
    while(i < n1) {
        temp.push_back(arr1[i]);
        i++;
    }

    //push leftovers from arr2
    while(j < n2) {
        temp.push_back(arr2[j]);
        j++;
    }

    int n = temp.size();
    if(n % 2 == 1) {
       //odd length
       return temp[n / 2];
    }
    else {
       //even length
       int evenAns = ((n / 2 - 1) + (n / 2)) / 2;
       return temp[evenAns];
    }
}

int main() {
  vector<int> arr1 = {1, 3, 4, 7, 10, 12};
  vector<int> arr2 = {2, 3, 6, 15}; 

  int ans = findMedian(arr1, arr2);
  cout << "Median is " << ans;

  return 0;
}