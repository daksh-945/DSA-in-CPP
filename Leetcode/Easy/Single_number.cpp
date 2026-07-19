// Leetcode_136 : find the single number in the array ;
// beats ; 100%


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        // int x = *max_element(nums.begin(), nums.end())+1;
        // vector<int> hash(x,0);
        // for (int i=0 ; i < n; i++) {

        //     hash[nums[i]]++;
        // }
        // for (int i= 0 ; i < x ; i++) {
        //     if (hash[i] == 1) {
        //         return i;
        //     }
        // }
        // return 0;
        sort(nums.begin(), nums.end());
        for (int i= 0 ; i < n; i = i+2) {
            if (i == n-2 || i == n-1) {
                return nums[i];
                continue;
            }
            if (nums[i] == nums[i+1] ) {
                continue;
            }
            else {
                return nums[i];
            }
        }
        return 0;
    }
};