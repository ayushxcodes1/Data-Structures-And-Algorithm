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

//Better - TC: O(N1 + N2), SC: O(1)
double findMedian2(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size(); 
    int n2 = arr2.size();

    int i = 0, j = 0;
    int n = (n1 + n2);
    int ind2 = n / 2;
    int ind1 = ind2 - 1;
    int cnt = 0;
    int ind1ele = -1, ind2ele = -1;
    while(i < n1 && j < n2) { 
        if(arr1[i] < arr2[j]) {
           if(cnt == ind1) ind1ele = arr1[i];
           if(cnt == ind2) ind2ele = arr1[i];
           cnt++;
           i++;
        }
        else {
            if(cnt == ind1) ind1ele = arr2[j];
            if(cnt == ind2) ind2ele = arr2[j];
            cnt++;
            j++;
        }
    }

    while(i < n1) {
        if(cnt == ind1) ind1ele = arr1[i];
        if(cnt == ind2) {
            ind2ele = arr1[i];
            break;
        }
        cnt++;
        i++;
    }

    while(j < n2) { 
        if(cnt == ind1) ind1ele = arr2[j];
        if(cnt == ind2) {
            ind2ele = arr2[j];
            break;
        }
        cnt++;
        j++;
    }

    if(n % 2 == 1) return ind2ele; //odd
    return (double)((double) (ind1ele + ind2ele)) / 2.0; //even
}

//Optimal - TC: O(log(N1 + N2)), SC: O(1)
double findMedian2(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size(); 
    int n2 = arr2.size();
    if(n1 > n2) return findMedian2(arr2, arr1);
    int low = 0, high = n1;
    int left = (n1 + n2 + 1) / 2;
    int n = n1 + n2;
    while(low <= high) {
        int mid1 = (low + high) / 2;
        int mid2 = left - mid1;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
    } 
}

int main() {
  vector<int> arr1 = {1, 2};
  vector<int> arr2 = {3, 4}; 
 
  double ans = findMedian(arr1, arr2);
  cout << "Median is " << ans << "\n";

  double ans2 = findMedian2(arr1, arr2);
  cout << "Median is " << ans2;

  return 0;
}