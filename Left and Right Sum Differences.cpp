// 2574. Left and Right Sum Differences
// Easy
// Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:
// answer.length == nums.length.
// answer[i] = |leftSum[i] - rightSum[i]|.
// Where:
// leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
// rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
// Return the array answer.

// Example 1:

// Input: nums = [10,4,8,3]
// Output: [15,1,11,22]
// Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
// The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int sum = 0;
        vector<int>ans;
        int n = nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        ans.push_back(nums[n-1]-nums[0]);
        for(int i=1;i<n;i++){
            int x= abs(nums[i-1]-(nums[n-1]-nums[i]));
            ans.push_back(x);
        }
        return ans;
    }
};
