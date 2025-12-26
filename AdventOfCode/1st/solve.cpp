#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>


 auto extractNumber = [](const std::string& s) -> int{
         return std::stoi(s.substr(1));
      };

int extraireDigit(int number) {
      while (number >= 10)
         number /= 10;
  
   return number;
}
int main (int argc, char *argv[]) {
   std::ifstream file("input.txt");

   if (!file.is_open()) {
        std::cerr << "Error: could not open file.\n";
        return 1;
    }
   
   std::string line;

   int count = 0;
   int currentPositon = 50;
   while (std::getline(file, line)){
      int extra = 0;
      int number = extractNumber(line);
      if (number >= 100 && number <= 999){  
        extra = extraireDigit(number);
      }

      count += extra;
      number %= 100;
      if (line[0] == 'L'){
         if (currentPositon - number < 0){
            int rest = abs(currentPositon - number);
            int oldvalue = currentPositon;
            currentPositon = 100 - rest; // to count for 0 
            if (currentPositon != 0 && oldvalue != 0) {
            count++;
            }
         }else {
            currentPositon = currentPositon - number;
         }
      }
      else if (line[0] == 'R') {
         if (currentPositon + number > 99 ){
            int rest = currentPositon + number - 99 - 1;
            int oldvalue = currentPositon;
            currentPositon = rest;
            if (currentPositon != 0 && oldvalue != 0) {
            count++;
            }
         }else {
            currentPositon += number;
         }
      }
      if (currentPositon == 0) {
         count++;
      }
      std::cout << currentPositon << "\n";
   }
   std::cout << count;
   file.close();
   return 0;
}
