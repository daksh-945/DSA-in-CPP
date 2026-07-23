// Problem : Find all the missing number form 0 to n ;
// type : easy 

// code :

// l.c = 26

// l.c = 268

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // approch 1

        int n = nums.size();
        int mxx = *max_element(nums.begin(), nums.end()) + 1;
        vector<int> hash(mxx, 0);
        for (int i= 0 ; i < n; i++) {
            hash[nums[i]]++;
        }
        int i ;
        for ( i=0 ;i < mxx; i++) {
            if ( hash[i] == 0) {
                return i;
            }
        }
        return i;

        // approch 2 

        // int n = nums.size() ;
        // int i ;
        // sort(nums.begin(), nums.end());
        // for (i= 0; i < n; i++) {
        //     if (nums[i] != i) {
        //         return i;
        //     }
        // }
        // return i;
    }
};