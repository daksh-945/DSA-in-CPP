// Largest element :
// Code :

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int mxx = INT_MIN;
        for (int i =0 ; i < n; i++) {
            if (mxx < nums[i]){
                mxx = nums[i];
            }
        }
        return mxx;

    }
};