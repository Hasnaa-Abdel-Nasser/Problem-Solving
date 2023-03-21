// 1512. Number of Good Pairs
// Easy
// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.

// Example 1:
// Input: nums = [1,2,3,1,1,3]
// Output: 4
// Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

// Example 2:
// Input: nums = [1,1,1,1]
// Output: 6
// Explanation: Each pair in the array are good.

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        int good = 0;
        for(int i=0;i<nums.size();i++)  mp[nums[i]]++;
        for(auto i : mp){
            if(i.second == 1)  continue;
            good += (i.second * (i.second + 1) / 2) - i.second;
        }
        return good;
    }
};
