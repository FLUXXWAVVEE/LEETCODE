class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        for(int i = 0; i < numbers.size(); i++) {

            int comp = target - numbers[i];

            int left = i + 1;
            int right = numbers.size() - 1;

            while(left <= right) {

                int mid = left + (right - left) / 2;

                if(comp == numbers[mid]) {
                    return {i + 1, mid + 1};
                }

                else if(comp < numbers[mid]) {
                    right = mid - 1;
                }

                else {
                    left = mid + 1;
                }
            }
        }

        return {};
    }
};