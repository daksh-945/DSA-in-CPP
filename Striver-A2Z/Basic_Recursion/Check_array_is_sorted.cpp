// Problem_08 : Check if the array is sorted or not ;
// type: easy ;

class Solution{	
	public:

        bool sort(vector<int> a , int i ) {
            
            if (i == a.size()-2) {
                return true;
            }
            if (a[i] > a[i+1]){
                return false ;
            }
            return sort (a , i+1);
        }


		bool isSorted(vector<int>& nums){
			//your code goes here
            int n = nums.size();
            int i = 0;
            // int l = n-1;
            if (n == 1) {
                return true;
            }
            if (n == 2) {
                if ( nums[i] <= nums[i+1]) {
                    return true;
                }
                else {
                    return false;
                }
            }
            return sort(nums, i);
		}
};