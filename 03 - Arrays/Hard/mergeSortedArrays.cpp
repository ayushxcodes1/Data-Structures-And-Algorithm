#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N + M), SC: O(N + M)
void merge(vector<int> &arr1, vector<int> &arr2, int n, int m) {
    int left = 0, right = 0;
    vector<int> ans;
    
    //O(min(M, N))
    while(left < n && right < m) {
        if(arr1[left] <= arr2[right]) {
           ans.push_back(arr1[left]);
           left++;
        }
        else {
           ans.push_back(arr2[right]);
           right++;
        }
    }

    //O(M)
    while(left < n) {
        ans.push_back(arr1[left]);
        left++;
    }

    //O(N)
    while(right < m) {
        ans.push_back(arr2[right]);
        right++;
    }

    //O(M + N)
    for(int i = 0; i < n + m; i++) {
        if(i < n) {
            arr1[i] = ans[i];
        }
        else {
            arr2[i - n] = ans[i];
        }
    }
}

//Optimal1 - TC: O(NlogN + MlogM), SC: O(1)
void merge2(vector<int> &arr1, vector<int> arr2, int n, int m) {
    int left = n - 1;
    int right = 0;

    //O(min(N, M))
    while(left >= 0 && right < m) {
        if(arr1[left] > arr2[right]) {
           swap(arr1[left], arr2[right]);
           left--, right++;
        }
        else {
            break;
        }
    }
    sort(arr1.begin(), arr1.end()); //O(NlogN)
    sort(arr2.begin(), arr2.end()); //O(MlogM)
}

//Optimal2 - TC: O(N + M), SC: O(1) - Gap Method
void swapIfGreater(vector<int> &arr1, vector<int> &arr2, int ind1, int ind2) {
    if(arr1[ind1] > arr2[ind2]) {
       swap(arr1[ind1], arr2[ind2]);
    }
}

void merge3(vector<int> &arr1, vector<int> &arr2, int m, int n) {
    int len = m + n;
    int gap = (len / 2) + (len % 2);

    while(gap > 0) {
        int left = 0;
        int right = left + gap;

        while(right < len) {
            //arr1 and arr2
            if(left < m && right >= m) {
                swapIfGreater(arr1, arr2, left, right - m);
            }

            //arr2 and arr2
            else if(left >= m){
                swapIfGreater(arr2, arr2, left - m, right - m);
            }   

            //arr1 and arr1
            else {
                swapIfGreater(arr1, arr1, left, right);
            }

            left++, right++;
        }

        if(gap == 1) break;
        gap = (gap / 2) + (gap % 2);
    }
}

int main() {
  vector<int> arr1 = {1, 3, 5, 7};
  vector<int> arr2 = {0, 2, 6, 8, 9};

  merge(arr1, arr2, 4, 5);
  for(auto it : arr1) {
    cout << it << " ";
  }

//   cout << endl;

//   arr1 = {1, 2, 3, 0, 0, 0};
//   arr2 = {2, 5, 6};
//   merge2(arr1, arr2, 3, 3);
//   for(auto it : arr1) {
//     cout << it << " ";
//   }

//   cout << endl;

//   arr1 = {1, 2, 3, 4};
//   arr2 = {5, 6, 7, 8, 9};
//   merge3(arr1, arr2, 4, 5);
//   for(auto it : arr1) {
//     cout << it << " ";
//   }
  return 0;
}