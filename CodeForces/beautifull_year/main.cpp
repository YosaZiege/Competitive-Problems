#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
   Type aliases (shorter & faster to write)
*/
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

/*
   Constants
*/
const int INF = 1e9;
const ll LINF = 1e18;

/*
   Fast I/O
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int year; 
    cin >> year;
   while(true) {
      ++year;
      int d1 = (year / 1000); 
      int d2 = ( year / 100) % 10; 
      int d3 = ( year / 10 ) % 10;
      int d4 = year % 10;
      if ( d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4 ) {
         
         cout << year ;
         break;
      }
   }
    return 0;
}

