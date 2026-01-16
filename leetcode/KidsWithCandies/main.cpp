class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     int maxCan = *max_element(candies.begin(), candies.end());
     vector<bool> results;
      for (int candi : candies){
        results.push_back( (candi + extraCandies) >= maxCan );
      }
      return results;
    }
};
