

#include <algorithm>
#include <iostream>
#include <vector>
int longestConsecutive(vector<int>& nums) {
     // Sort std::sort(v.begin() , v.end());

     std::sort(nums.begin() , nums.end());
      int n = nums.size();
      int length = 0;
        for (int i = 1 ; i < n ; i++ ){
            if (nums[i] == nums[i-1] + 1 || nums[i] == nums[i-1]){
                length++;
            }
         std::cout << length;
     }   

     return length;
    }

int main (int argc, char *argv[]) {
   std::vector<int> arr = {0, 3, 2, 5, 4, 6, 1, 1};
   int result = longestConsecutive(arr);  // pass vector directly
    return 0;} 


