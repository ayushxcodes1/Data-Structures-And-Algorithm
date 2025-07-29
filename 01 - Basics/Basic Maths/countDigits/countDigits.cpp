#include <bits/stdc++.h>

using namespace std;

int countDigit(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        cnt++;
        n = n / 10;
    }
    return cnt;
}

int main()
{
    int res = countDigit(4);
    cout << res;
    return 0;
}