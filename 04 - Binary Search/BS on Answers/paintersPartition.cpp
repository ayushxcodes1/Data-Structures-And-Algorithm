#include <bits/stdc++.h>

using namespace std;
 
int countStudents(vector<int> &arr, int pages) {
int n = arr.size();
int cntStu = 1;
int totalPages = 0;
for(int i = 0; i < n; i++) {
    if(totalPages + arr[i] <= pages) {
    totalPages += arr[i];
    }
    else {
    cntStu++;
    totalPages = arr[i];
    }
}
return cntStu;
}

int findPages(vector<int> &arr, int n, int k) {
    if(k > n) return -1; //impossible case
    
    int maxi = *max_element(arr.begin(), arr.end());
int sum = accumulate(arr.begin(), arr.end(), 0);
for(int i = maxi; i <= sum; i++) {
    int cntStu = countStudents(arr, i);
    
    if(cntStu == k) { 
    return i;
    }
} 
return -1;
}

int findPages2(vector<int> &arr, int n, int k) {
    if(k > n) return -1; //impossible case
    
    int maxi = *max_element(arr.begin(), arr.end());
    int sum = accumulate(arr.begin(), arr.end(), 0);

int low = maxi, high = sum;
while(low <= high) {
    int mid = low + (high - low) / 2;
    int cntStu = countStudents(arr, mid);
    
    if(cntStu > k) {
        low = mid + 1;
    }
    else high = mid - 1;
}
return low;
}

//Brute Force - TC: O((sum - max + 1) * N)
int minTime(vector<int>& arr, int k) {
    return findPages(arr, arr.size(), k);
}

//Optimal - TC: O(log(sum - max + 1) * N)
int minTime2(vector<int>& arr, int k) {
    return findPages2(arr, arr.size(), k);
}

int main() {
    vector<int> arr = {5, 10, 30, 20, 15};
    int k = 3;

    int ans = minTime(arr, k);
    cout << ans << "\n";

    int ans2 = minTime2(arr, k);
    cout << ans2;
}