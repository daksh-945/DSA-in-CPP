// Leetcode_2996: Smallest Missing Integer greater than Sequential Prefix Sum
// Link : https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
// Beats : 100%
// Input: nums = [3,4,5,1,12,14,13]
// Output: 15
// Explanation: The longest sequential prefix of nums is [3,4,5] with a sum of 12. 12, 13, and 14 belong to the array while 15 does not. Therefore 15 is the smallest missing integer greater than or equal to the sum of the longest sequential prefix.

// Code :

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int sum = 0;
        int c = 0;
        int h = 0;
        for (int i = 1 ; i < n ; i++) {
            if (nums[i] == nums[i-1]+1) {
                sum = sum + nums[i-1];
                count = 1;
                h = 1;
            }
            if (nums[i] != nums[i-1]+1 && count == 1) {
                sum += nums[i-1];
                c = 1;
                break;
            }
            if (nums[i] != nums[i-1] +1 ) {
                break;
            }
        }
        if (h == 0) {
            sum = nums[0];
        }
        else if (c == 0) {
            sum += nums[n-1];
        }
        
        // for (int i= 0 ; i < n; i++) {
        //     if (sum == nums[i] ) {
        //         sum++;
        //         i = 0;
        //     }
        // }
        // sort(nums.begin(), nums.end());
        // for (int i= 0 ; i < n; i++) {
        //     if (sum == nums[i]) {
        //         sum++;
        //         continue;
        //     }
        // }
        int mxx = *max_element(nums.begin(), nums.end());
        vector<int> hash(mxx+1,0);
        for(int i= 0 ; i < n; i++) {
            hash[nums[i]]++;
        }
        for (int i= 0 ;i < mxx+1 ; i++) {
            if (sum == i) {
                if (hash[i] > 0) {
                    sum++;
                    continue;
                }
                else {
                    return sum;
                }
            }
        }
        return sum;
    }
};