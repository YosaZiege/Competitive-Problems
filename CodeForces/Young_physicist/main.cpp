#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
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
   
    int n ;
   cin >> n ; 
   int xSomme = 0 ;
   int ySomme = 0 ;
   int zSomme = 0 ;
   for ( int i = 0 ; i < n ; i++ ) {
      int xi , yi , zi; 
      cin >> xi >> yi >> zi ; 
      xSomme += xi ; 
      ySomme += yi;
      zSomme += zi ;
   }
   if ( xSomme == 0 && ySomme == 0 && zSomme == 0){
      cout << "YES";
   }else {
      cout << "NO";
   }
    return 0;
}

