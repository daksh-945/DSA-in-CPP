// Second largest elment :
// Code :

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
      int n = nums.size();
      int mxx = INT_MIN;
      for (int i= 0 ; i < n; i++) {
        if (mxx < nums[i]) {
            mxx = nums[i];
        }
      }
      int mxx2 = INT_MIN;
      int count = 0;
      for (int i = 0 ;i < n; i++) {
        if ( mxx2 < nums[i]) {
            if (nums[i] == mxx) {
                continue;
            }
            count = 1;
            mxx2 = nums[i];
        }
      }
      if (count == 0) {
        return -1;
      }
      return mxx2;
    }
};