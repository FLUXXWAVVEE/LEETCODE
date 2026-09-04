#include <unordered_map>
#include <vector>
#include <algorithm>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int  n = nums.size();
        int expected = n * (n+1) / 2;
        int actual = 0;
        int missing;
        for(int i = 0 ; i < nums.size(); i++){
            actual += nums[i];
            }
            missing = expected - actual;

            return missing;

           

        
    }
};