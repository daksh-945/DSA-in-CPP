// Leetcode_283: Moves zeros to end of array without disturbing other numbers oder 
// link : https://leetcode.com/problems/move-zeroes/
// beats : 5%
// Example :
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

// Code :

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        if (n == 0) {
            return ;
        }
        if (n == 1) {
            return;
        }
        // int right = n-1;
        int count = 0;
        int total = 0;
        // int x = n;
        int i = 0;
        while (left < n) {
            count = 0;
            total = 0;
            if (nums[left] == 0) {
                
                for (i = left ; i < n-1; i++) {
                    swap(nums[i],nums[i+1]);
                }
                // left++;
                for (i = left ; i < n ; i++) {
                    if (nums[i] == 0) {
                        count++;
                    }
                    total++;
                }
                if (total == count ) {
                    break;
                }
                continue;
            }
            left++;
        }
        // if (nums[n-1] == 0) {
        //     swap(nums[0],nums[1]);
        // }
        // sort(nums.begin(), nums.end()-count);
    }
};