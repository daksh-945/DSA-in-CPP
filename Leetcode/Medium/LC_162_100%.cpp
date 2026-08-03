// Leetcode_162 : Find the peak elemet in array 
// link : https://leetcode.com/problems/find-peak-element/
// Beats : 100%
// Example : Input: nums = [1,2,1,3,5,6,4]
// Output: 5
// Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.

// Code : 

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        if (n == 1) {
            return 0;
        }
        if (nums[0] > nums[1]) {
            return 0;
        }
        if (nums[n-1] > nums[n-2]) {
            return n-1;
        }
        int low = 1;
        int high = n-2;
        while (low <= high) {
            int mid = low + (high-low)/2;
            if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid;
            }
            else if (nums[mid] > nums[mid-1] && nums[mid] < nums[mid+1]) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }

        }
        return -1;
        
    }
};