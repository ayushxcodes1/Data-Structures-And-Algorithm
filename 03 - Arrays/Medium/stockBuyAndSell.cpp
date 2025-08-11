#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
int findMaxProfit(vector<int> &prices) {
    int n = prices.size();
    int maxProfit = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n - 1 ; j++) {
            maxProfit = max(maxProfit, prices[j] - prices[i]);
        }
    }
    return maxProfit;
}

//Optimal - TC: O(N), SC: O(1)
int findMaxProfit2(vector<int> &prices) {
    int n = prices.size();
    int mini = prices[0];
    int maxProfit = 0;
    for(int i = 0; i < n; i++) {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

int main() {
    
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  int res = findMaxProfit(prices);
  cout << "Maximum Profit: " << res << "\n";

  int res2 = findMaxProfit2(prices);
  cout << "Maximum Profit: " << res2;
  return 0;
}