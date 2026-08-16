// Leetcode_32 : Next Permutation
// Link : https://leetcode.com/problems/next-permutation/
// Beats : 100%
// Example : Input: nums = [1,2,3]
// Output: [1,3,2]

// Code : 

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // nums = next_permutation(vec.begins(), vec.ends());
        int n = nums.size();
        int index = -1;
        for (int i = n-2 ; i >= 0 ; i--) {
            if (nums[i+1] > nums[i]) {
                index = i;
                break;

            }
        }
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return ;
        }
        for (int j = n-1 ; j > index ; j--) {
            if (nums[j] > nums[index]){
                swap(nums[j], nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1, nums.end());
    }
};