/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

const twoSum = function (nums, target) {
    for (let i = 0; i < nums.length; i++) {
        for (let j = i + 1; j < nums.length; j++) {
            if (nums[i] + nums[j] == target) {
                return [i,j];
            }
        }
    }
    return [];
}

// Example 1;

const nums = [12, 17, 1, 5, 2];
const target = 19;
console.log(twoSum(nums, target));