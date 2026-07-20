// Problem : Sum of all array elements 
// type : easy 

class Solution{	
	public:
		int arraySum(vector<int>& nums){
			//your code goes here
            return sum(nums,0);
        }
        int sum(vector<int>& a , int i) {
            int n = a.size();
            if (i == n) {
                return 0;
            }
            return a[i] + sum(a, i + 1);
        }
};