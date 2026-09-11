class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int i = 0;
        long long ans = 0;
        double sum = -1e18;

        for(int j = 0; j < nums.size(); j++) {

            ans += nums[j];

            if(j >= k - 1) {

                sum = max(sum, (double)ans / k);

                ans -= nums[i];
                i++;
            }
        }

        return sum;
    }
};