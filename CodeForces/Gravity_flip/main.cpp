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
   cin >> n;
   vector<int> cubs_of_each_column; 
   for ( int i = 0 ; i < n ; i++ ) {
      int input; 
      cin >> input;
      cubs_of_each_column.push_back(input);
   }
   sort(cubs_of_each_column.begin() , cubs_of_each_column.end());
   
   for (int p: cubs_of_each_column){
      cout << p << " "; 
   }
    return 0;
}

