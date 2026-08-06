// Leetcode_80 : Remove duplicates from the sorted elements
// link : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
// beats : 100%
// Example : Input: nums = [0,0,1,1,1,1,2,3,3]
// Output: 7, nums = [0,0,1,1,2,3,3,_,_]
// Explanation: Your function should return k = 7, with the first seven elements of nums being 0, 0, 1, 1, 2, 3 and 3 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores). 

// Code : 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int i = 0;
        if (n == 0) {
            return 0;
        }
        else if (n == 1) {
            return 1;
        }
        else if (n == 2) {
            return 2;
        }
        // count = 0;
        while (left <= n-3) {
            if (nums[left] == nums[left+1] && nums[left] == nums[left+2]) {
                left++;
                continue;
            }
            else {
                nums[i] = nums[left];
                left++;
                i++;
                continue;
            }
        }
        nums[i++] = nums[n-2];
        nums[i++] = nums[n-1];
        return i;
    }
};