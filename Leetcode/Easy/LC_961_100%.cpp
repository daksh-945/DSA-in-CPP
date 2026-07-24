// Leetcode_961 : find N repeated element in array 
// link : https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
// beats : 100%

// Code :

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int mxx = *max_element(nums.begin(), nums.end())+1;
        vector<int> hash(mxx,0);
        for (int i=0 ; i < n; i++) {
            hash[nums[i]]++;
        }
        for (int i=0  ; i < mxx ; i++) {
            if (hash[i] > 1) {
                return i;
            }
        }
        return -1;
    }
};