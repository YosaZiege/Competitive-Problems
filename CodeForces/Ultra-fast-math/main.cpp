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
    string line1 , line2;
   string result ;
      cin >> line1 >> line2;
    for ( int i = 0 ; i < line1.length() ; i++) {
      if (line1[i] != line2[i] ){
         result += '1';
      }else {
         result += '0';
      }

   }

   cout << result;

    return 0;
}

