class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum = 0;
        int diff, exp;
        long long n = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
        }

        exp = ((n*(n + 1)) / 2);
        diff = exp - sum;
        return diff;
    }
};