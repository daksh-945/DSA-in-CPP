// Problem_07 : Rverse an array 
// type : easy 

class Solution{	
	public:

        vector<int> reverse(vector<int>& a,int i ,int r) {
            if (i >= r) {
                return a;
            }
            int temp = a[i];
            a[i] = a[r];
            a[r] = temp;
            return reverse(a , i+1 , r-1);
        }



		vector<int> reverseArray(vector<int>& nums){			
			//your code goes here
            int n = nums.size();
            int i = 0;
            int r = n-1;
            return reverse(nums , i , r);
		}
};