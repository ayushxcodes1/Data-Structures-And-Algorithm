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

    int i = 0, j = 0;
    int n = (n1 + n2);
    int ind2 = n / 2;
    int ind1 = ind2 - 1;
    int cnt = 0;
    int ele1 = -1, ele2 = -1;
    while(i < n1 && j < n2) { 
        if(arr1[i] < arr2[j]) {
           if(cnt == ind1) ele1 = arr1[i];
           if(cnt == ind2) ele2 = arr1[i];
           cnt++;
           i++;
        }
        else {
            if(cnt == ind1) ele1 = arr2[j];
            if(cnt == ind2) ele2 = arr2[j];
            cnt++;
            j++;
        }
    }

    //push leftovers from arr1
    while(i < n1) {
      
    }

    //push leftovers from arr2
    while(j < n2) { 
       
    }
}

int main() {
  vector<int> arr1 = {1, 2};
  vector<int> arr2 = {3, 4}; 
 
  double ans = findMedian(arr1, arr2);
  cout << "Median is " << ans;

  return 0;
}