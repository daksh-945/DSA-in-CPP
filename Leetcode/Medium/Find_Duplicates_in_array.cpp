// Problem_442 : Find Duplicates of an array 
// Beats : 47%

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        vector<int> vec;
        for (int i= 0 ; i < n ; i++) {
            count = 0;
            if ( i == n-1) {
                continue;
            }
            if(nums[i] == nums[i+1]) {
                count = 1;
            }
            if (count == 1) {
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }
};