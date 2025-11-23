#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main (int argc, char *argv[]) {
   int datasets ;
   cin >> datasets;


   for  (int i = 0 ; i < datasets ; i++ ){
        long long x , y , n; 
        long long z = 1;
        cin >> x >> y >> n ;
         
         while (y > 0) {
            if (y & 1) {
               z = z * x ;
            }

            x = x * x; 
            y >>= 1;
         }
         printf("%lld \n" , z % n);

   }
   return 0;
}
