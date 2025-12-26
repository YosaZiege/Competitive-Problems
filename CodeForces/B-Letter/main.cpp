#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
    unordered_map<char, int> characters;
    for (char c : s1) {
        characters[c]++;
    }

   
   // for (auto &p : characters) {
   //    cout << p.first << ": " << p.second << endl;
   // }


   string s2;

   getline(cin , s2);
   s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());

   bool possible = true;
   for (char c: s2) {
      if (characters[c] < 1){
         possible = false;
         break;
      }else {
         characters[c]--;
      }
   }


   if (possible){
      cout << "YES" << endl;

   }else {
      cout << "NO" << endl;
   }
    return 0;
}

