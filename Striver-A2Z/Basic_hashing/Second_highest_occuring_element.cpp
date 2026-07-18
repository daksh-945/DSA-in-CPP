// Problem_02 : second highest occuring element in array 
// type : easy 
// tip : ess Question ke edge cases ne essi ki tessi karr di 

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int n = nums.size();
        int big = *max_element(nums.begin(), nums.end());
        vector<int> hash(big+1 , 0);
        if (n == 1) {
            return -1;
        }
        for (int i= 0 ; i < n ; i++) {
            hash[nums[i]]++;
        }
        int most_feq = *max_element(hash.begin(), hash.end());
        // hash(most_feq);
        for (int i = 0 ; i < big+1 ; i++) {
            if (hash[i] == most_feq) {
                hash[i] = 0;
                // break;
            }
        }
        int count = 0;
        for (int i = 0 ; i <= big ; i++) {
            if (hash[i] == 0) {
                count++;
            }
        }
        if (count == big+1 ) {
            return -1;
        }
        int second_max = *max_element(hash.begin(), hash.end());
        for (int i=0 ;i < big+1; i++) {
            if (hash[i] == second_max) {
                return i;
            }
        } 
    }
};