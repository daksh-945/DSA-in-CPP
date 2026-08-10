// Leetcode_137 : Single Number 2;
// Link : https://leetcode.com/problems/single-number-ii/
// Beats : 31%
// Example : Input: nums = [0,1,0,1,0,1,99]
// Output: 99

// Code : 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // space complexity not optimised 
        unordered_map <int ,int> mpp;
        for (int x : nums) {
            mpp[x]++;
        }
        for (auto i : mpp) {
            if (i.second == 1) {
                return i.first;
            }
        }
        return -1;
    }
};
