class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();

        
        int left = nums.size() - k;
        int right = nums.size() - 1;

        while(left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }

        
        left = 0;
        right = nums.size() - k - 1;

        while(left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }

        
        left = 0;
        right = nums.size() - 1;

        while(left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
};