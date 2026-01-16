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
   int count = 0;
      unordered_map<int, int > mp;
   int n ; 
   cin >> n;
   for ( int i = 0 ; i < n ; i++ ) {
   int p , v , t ; 
   cin >> p >> v >> t ;

   mp[p]++;
   mp[v]++;
   mp[t]++;
   if ( mp[1] >= 2){
      count++;
   } 
   mp[1] = 0; 
   mp[0] = 0;
}
   
   cout << count;
    return 0;
}

