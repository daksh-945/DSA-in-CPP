// Problem : find Leaders in an array from back of array 
// type : medium 
// L.C : 1792

// Code : 

// L.C 1762

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
    //   brute force 
    int n =  nums.size();
    vector<int> vec;
    // int mxx = *max_element(nums.begin() + i + 1 , nums.end()) ;
    int mxx1 = INT_MIN;
    for (int i= n-1 ; i >= 0 ; i--) {
        if ( i == n-1) {
            vec.push_back(nums[i]);
            mxx1 = nums[i];
            continue;
        }
        if (nums[i] > mxx1) {
            vec.push_back(nums[i]);
            mxx1 = nums[i];
        }
    }
    int left = 0;
    int right = vec.size()-1;
    while (left <= right) {
        int temp = vec[left];
        vec[left] = vec[right];
        vec[right] = temp;
        left++;
        right--;
    }
    // int left = 0;
    // int right = n-1
    return vec;
    }
};