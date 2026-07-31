// Problem: Sorted an array in order of 012 
// type : medium 

// code 1 of mine 

// 75
// better solotion is basicaly using an hash method 
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for ( int i = 0 ; i < 3 ; i++) {
            int left = count ; 
            int right = n-1;
            while (left <= right) {
            if (nums[left] == i) {
                left++;
                count++;
                continue;
            }
            if (nums[right] != i) {
                right--;
                continue;
            }
            if (nums[right] == i && nums[left] != i) {
                swap(nums[right],nums[left]);
                count++;
                left++;
                right--;
                continue;
            }
        } 
        }
    }
};

// code 2 

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        // deutch national flag algo .
        int n = nums.size();
        int low = 0 , high = n-1 , mid = 0;
        while (mid <= high) {
            if (nums[mid] == 1) {
                mid++;
            }
            else if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else {
                // mid == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};