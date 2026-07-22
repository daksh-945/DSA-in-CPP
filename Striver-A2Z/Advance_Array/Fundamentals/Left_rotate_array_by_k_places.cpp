// left rotate array by k places 
// code 

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n== 0) {
            return ;
        }
        k = k% n;
        vector<int> vec;
        for (int i=0; i < k; i++) {
            vec.push_back(nums[i]);
        } 
        // while (k > 0) {
            for (int i = 0; i < n-k; i++) {
                nums[i] = nums[i+k];
            }
        // }
        for (int i= 0 ;i < k; i++) {
            nums[n-k+i] = vec[i];
        }

    }
};