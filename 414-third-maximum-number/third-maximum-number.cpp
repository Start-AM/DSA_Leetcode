class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;
        int prev = 0;

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (count == 0 || nums[i] != prev) {
                count++;
                prev = nums[i];
            }

            if (count == 3) {
                return nums[i];
            }
        }

        return nums[nums.size() - 1];
    }
};