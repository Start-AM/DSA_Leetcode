class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxNum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]==1){
                count++;
            }
            else {
                count = 0;
            }

            maxNum = max(maxNum,count);
        }
        return maxNum;
    }
};