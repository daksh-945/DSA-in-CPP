// Leetcode_169: find Majority element in array in sense of frequency 
// beats : 7%

// cant use hash because negative nubers also there 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // hash can't be used due to negative numbers
        int n = nums.size();
        // int x = *max_element(nums.begin(), nums.end()) + 1;
        // vector<int> hash(x,0);
        // for (int i=0 ; i < n; i++) {
        //     hash[nums[i]]++;
        // }
        // for (int i= 0 ; i < x; i++) {
        //     if (hash[i] > n/2) {
        //         return i;
        //     }
        // }
        // return 0;
        int count = 0 ;
        for (int i= 0 ; i < n; i++) {
            int x = nums[i];
            count = 0;
            for (int j = i ; j < n ; j++) {
                if (x == nums[j]) {
                    count++;
                }
            }
            if (count > n/2) {
                return x;
            }
        }
        return -1;
    }
};