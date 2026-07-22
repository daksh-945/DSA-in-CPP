// Leetcode_268 : find Missing number in an array , range [0,n];
// Example 1:
// Input: nums = [3,0,1]
// Output: 2
// Explanation:
// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
// Example 2:
// Input: nums = [0,1]
// Output: 2
// Explanation:
// n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums. 
// beats : 100%
// link : https://leetcode.com/problems/missing-number/

// code :: 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int x = *max_element(nums.begin(), nums.end())+1;
        vector<int> hash(x , 0);
        for (int i=0 ;i < n; i++) {
            hash[nums[i]]++;
        }
        int i = 0;
        for (i= 0 ; i < x ; i++) {
            if (hash[i] == 0) {
                return i;
            }
            else continue;
        }
        return i;
    }
};