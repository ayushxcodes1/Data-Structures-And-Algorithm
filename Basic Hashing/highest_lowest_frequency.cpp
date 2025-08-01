#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC : O(N^2)
void Frequency(int arr[], int n) {
    int maxFreq = 0,  minFreq = INT_MAX;
    int maxEle = 0, minEle = 0;

    for(int i = 0; i < n; i++) {
        int cnt = 0;
        
        bool isVisited = false;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {  
               isVisited = true;    
               break;
            }
        }
        
        if(isVisited) continue;

        //Count Frequency
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
               cnt++;
            }
        }

        if(cnt > maxFreq) {
           maxFreq = cnt;
           maxEle = arr[i];
        } 

        if(cnt < maxFreq) {
           minFreq = cnt;
           minEle = arr[i];
        } 
    }

    cout << "Highest Frequency Element : " << maxEle << endl ;
    cout << "Lowest Frequency Element : " << minEle << endl;
}

//Optimized - TC: O(N), SC: O(N)
void Frequency2(int arr[], int n) {
    unordered_map<int, int> mpp;
    
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    
    int maxFreq = 0,  minFreq = INT_MAX;
    int maxEle = 0, minEle = 0;

    for(auto it : mpp) {
        int cnt = it.second;
        int ele = it.first;

        if(cnt > maxFreq) {
           maxFreq = cnt;
           maxEle = ele;
        } 

        if(cnt < minFreq) {
           minFreq = cnt;
           minEle = ele;
        } 
    }

    cout << "Highest Frequency Element : " << maxEle << endl ;
    cout << "Lowest Frequency Element : " << minEle << endl ;
}

int main() {
  int arr[] = {10, 5, 10, 15, 10, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  Frequency(arr, n);
  Frequency2(arr, n);

  return 0;
}