#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N1 + N2), SC: O(N1 + N2)
double findMedian(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size(); 
    int n2 = arr2.size();
    vector<int> temp;

    int i = 0, j = 0;
    while(i < n1 && j < n2) { 
        if(arr1[i] < arr2[j]) {
           temp.push_back(arr1[i]);
           i++;
        }
        else {
           temp.push_back(arr2[j]);
           j++;
        }
    }

    //push leftovers from arr1
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
       
    //even length
    double evenAns = ((double)temp[n / 2 - 1] + (double)temp[n / 2]) / 2;
    return (double)evenAns;
}

//Optimal - TC: O(log(N1 + N2)), SC: O(N1 + N2)
double findMedian(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size(); 
    int n2 = arr2.size();
    vector<int> temp;

    int i = 0, j = 0;
    while(i < n1 && j < n2) { 
        if(arr1[i] < arr2[j]) {
           temp.push_back(arr1[i]);
           i++;
        }
        else {
           temp.push_back(arr2[j]);
           j++;
        }
    }

    //push leftovers from arr1
    while(i < n1) {
        temp.push_back(arr1[i]);
        i++;
    }

    //push leftovers from arr2
    while(j < n2) { 
        temp.push_back(arr2[j]);
        j++;
    }
    
    int low = 0, high = temp.size() - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        
    }
}

int main() {
  vector<int> arr1 = {1, 2};
  vector<int> arr2 = {3, 4}; 
 
  double ans = findMedian(arr1, arr2);
  cout << "Median is " << ans;

  return 0;
}