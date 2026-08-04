// Leetcode_3731: Find Missing number from arr[min] to arr[max]
// link : https://leetcode.com/problems/find-missing-elements/
// Beats : 60%
// Example : Input: nums = [1,4,2,5]
// Output: [3]
// Explanation:
// The smallest integer is 1 and the largest is 5, so the full range should be [1,2,3,4,5]. Among these, only 3 is missing.

// Code :

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) {
            return {};
        }
        int mxx = *max_element(nums.begin(), nums.end());
        vector<int> hash(mxx+1, 0);
        for (int i = 0 ; i < n;  i++) {
            hash[nums[i]]++;
        }
        vector<int> vec;
        int count = 0;
        for (int i = 0 ; i < mxx+1 ; i++) {
            if (hash[i] != 0) {
                count = 1;
            }
            if (count == 1 && hash[i] == 0) {
                vec.push_back(i);
            }
        }
        return vec;

        // more optimal approch 
        // sort(nums.begin(), nums.end());
        // int mnn = nums[0];
        // int mxx = nums[n-1];
        // int left = 0 ; 
        // int right = n-1;
        // vector<int> vec;
        // int extra = mnn;
        // while (left <= right) {
        //     if (nums[left] == (extra)) {
        //         left++;
        //         extra++;
        //     }
        //     else {
        //         vec.push_back(extra);
        //         extra++;
        //     }
        //     // if (nums[right])
        // }
        // return vec;
    }
};