#include <bits/stdc++.h>

using namespace std;

string largestOddNumber(string s) {
    int num = stoi(s);
    string ans = "";
    
    while(num > 0) {
        int lastDigit = num % 10;
        
        //even
        if(lastDigit % 2 == 0) {
           num = num / 10; 
        }
        else {
            ans = to_string(num); 
            break;
        }
    }
    return ans;
}

int main() {
  string s = "4201";

  string ans = largestOddNumber(s);
  cout << ans;

  return 0;
}