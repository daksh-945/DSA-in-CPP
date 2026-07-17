// Leetcode_26: Removes duplicates from sorted array 
// 100% beats 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 0;
        vector<int> vec ;
        int i ;
        for (i = 0 ; i < nums.size()-1 ; i++) {
            // int count = 0;
            // for (int j = i+1 ; j < nums.size(); j++) {
                if (nums[i] == nums[i+1]) {
                    // count = 1;
                    continue;
                }
                
            // }
            // if ( count == 0) {
                n++;
                vec.push_back(nums[i]);
            // }
        }
        n++;
        vec.push_back(nums[i]);
        for (int i = 0 ; i < n ; i++) {
            nums[i] = vec[i];
        }
        // int num = 0;
        // for (int i= 0 ; i < n; i++){
        //     num = num + 1;
        // }
        // cout << num;
        return n;
    }

};