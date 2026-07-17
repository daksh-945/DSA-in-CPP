// Problem_01: Two Sum

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
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