// Problem_35: Search Insert Position 

class Solution {
    // binary search se karna hai na ki linear serch se keep in your mind time complexity log N 
public:
    int searchInsert(vector<int>& nums, int target) {
        int count = 0;
        for (int i= 0 ;i < nums.size(); i++) {
            if (nums[i] == target){
                return i;
            }
            else {
                count = 1;
            }
        }
        if (count == 1 ) {
            if (nums[nums.size()-1] < target) {
                return nums.size();
            }
            if (nums[0] > target) {
                return 0;
            }
            for (int i = 0 ; i < nums.size()-1; i++) {
                if (nums[i] < target && nums[i+1] > target) {
                    count = 2;
                    return i+1;
                }
            }
            // if (count == 1) {
            //     return nums.size();
            // }
        }
        return 0;
    }
};