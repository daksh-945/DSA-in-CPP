// problem : moves all zeros in a array to end 
// type : easy 

// code :

// l.c = 283 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n = nums.size();
       int a[n] = {0};
       int x = 0;
       for (int i= 0 ;i <n; i++) {
        if (nums[i] != 0) {
            a[x] = nums[i];
            x++;
        }
       } 
       for (int i = 0 ; i < n; i++) {
        nums[i] = a[i];
       }
    }
};
