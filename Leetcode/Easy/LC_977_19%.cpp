// Problem_977 : Squares of a sorted array
// link : https://leetcode.com/problems/squares-of-a-sorted-array/
// beats : 19%


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // sorting abho ache se nhi atti nhi toh aur koi sorting kar taki time complexity bhi kam ho 
        vector<int> vec;
        for (int i= 0 ; i < nums.size(); i++) {
            vec.push_back(nums[i]*nums[i]);
        }
        int n= vec.size();
        for (int i=0 ; i < n; i++) {
            for (int j=0 ;j < n-i-1 ; j++) {
                if (vec[j] > vec[j+1] ) {
                    int temp = vec[j];
                    vec[j] = vec[j+1];
                    vec[j+1] = temp;

                }
            }
        }
        return vec;
        
    }
};