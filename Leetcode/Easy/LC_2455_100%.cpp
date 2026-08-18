// Leetcode_2455 : Avg value of even no. that are divisible by three
// Beats : 100%
// Link : https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/
// Example : Input: nums = [1,3,6,10,12,15]
// Output: 9
// Explanation: 6 and 12 are even numbers that are divisible by 3. (6 + 12) / 2 = 9.

// Code : 

class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size();
        int sum = 0 ; 
        int c = 0;
        for (int i= 0 ; i < n; i++) {
            if (nums[i] % 3 == 0 && nums[i] % 2 == 0) {
                sum += nums[i];
                c++;
            }
        }
        if ( c== 0) {
            return 0;
        }
        return (sum/c);
    }
};