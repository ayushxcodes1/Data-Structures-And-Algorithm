#include <bits/stdc++.h>

using namespace std;

int stockBuyAndSell(vector<int> &prices) {
    int n = arr.size();
    int maxProfit = 0;
    int buyDay, sellDay;
    for(int i = 0; i < n; i++) {
        buyDay = i;
        int profit = 0;
        for(int j = i + 1; j < n - 1 ; j++) {
            sellDay = j;
            profit = arr[i] - arr[j];
        }
        maxProfit = max(profit, maxProfit);
    }
}

int main() {
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  int res = stockBuyAndSell(prices);
  cout << "Maximum Profit: " << res;
  return 0;
}