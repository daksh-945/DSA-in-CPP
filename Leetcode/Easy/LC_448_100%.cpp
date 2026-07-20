// Leetcode_448: find all numberse disappeared in an array and instead duplicate number takes place 
// beats : 100%


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size() ; 
        int x = n+1;
        vector<int> hash(x,0);
        vector<int> vec;
        for (int i=0 ; i < n; i++) {
            hash[nums[i]]++;
        }

        int i = 0;
        for (i=1 ; i <= n;  i++) {
            if (hash[i] == 0) {
                vec.push_back(i);
            }
        }
        // if (vec.size() == 0) {
        //     vec.push_back(i+1);
        // }
        return vec;
    }
};