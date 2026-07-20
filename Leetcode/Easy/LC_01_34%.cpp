// Problem_01: Two Sum
// link : https://leetcode.com/problems/two-sum/
// beats : 34%

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
// In C language 
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        int* ans = (int*)malloc(2*sizeof(int)) ;
        for (int j = i + 1; j < numsSize; j++) {

            if (nums[i] + nums[j] == target) {
                
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }
    return NULL;
}

// In C++ Language 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i= 0 ;i < n; i++) {
            for (int j = i+1 ; j < n; j++) {
                if (nums[i] + nums[j] == target ) {
                    // nums.clear();
                    // nums.push_back(i);
                    // nums.push_back(j);
                    return {i,j};
                }
            }
        }
        return nums;
    }
};