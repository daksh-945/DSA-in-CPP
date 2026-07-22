// Selection sort ;;
// code : 

class Solution {
public:
    int min(vector<int>& nums , int n , int i ) { 
        // int mn = nums[i];
        int mn_index = i;
        for (int j = i ; j < n ; j++) {
            if (nums[mn_index] > nums[j]) {
                // mn = nums[j];
                mn_index = j;
            }
        } 
        return mn_index;
    }
    void myswap(int mn , vector<int>& arr, int i) {
        int temp = arr[mn];
        arr[mn] = arr[i];
        arr[i] = temp;
    }
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i=0 ; i <= n-2 ; i++) {
            int mn = min(nums , n , i); 
            //finding min element index  in array 
            myswap(mn , nums , i) ; 
            // swaping min element and arr[i]
        }
        return nums;
    }
};
