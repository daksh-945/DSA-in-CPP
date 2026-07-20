// Problem_34 : Find first and last position of element in sorted array 
// link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// beats : 100%

// Code :

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        // vector<int> vec;
        int count1 = 0, count2 = 0;
        if (left == right && nums[0] == target) {
            return {0,0};
        }
        while (left <= right) {
            if (nums[left] == target && count1 == 0) {
                count1++;
                // vec.push_back(left);
            }
            if (nums[right] == target && count2 == 0){
                count2++;
                // vec.push_back(right);
            }
            if (count1 == 0) {
            left++; }
            if (count2 == 0) {
            right--; }
            if (count1 == 1 && count2 == 1) {
                break;
            }

        }
        if (count1 == 0 && count2 == 0) {
            return {-1,-1};
        }
        if (count1 == 0 || count2 == 0) {
            return {left,left};
        }
        else {
            return {left,right};
        }
    }
};