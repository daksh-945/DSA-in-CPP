// Left rotate array by one place 
// code 

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        int x = nums[0];
        for (int i = 0 ; i < n; i++) {
            if ( i == n-1) {
                nums[i] = x;
                break;
            }
            nums[i] = nums[i+1];
        }
    }
};