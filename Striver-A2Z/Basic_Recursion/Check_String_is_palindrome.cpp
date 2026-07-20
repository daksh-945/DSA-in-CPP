// problem_05 : check the string is a palindrome or not 
// type : easy

class Solution{	
	public:		

        void check(string& s , int l , int r) {
            if (l >= r) {
                return;
            }
            int temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            check( s, l+1, r-1);
        }

		bool palindromeCheck(string& s){
			//your code goes here
            int n = s.size();
            int l = 0;
            int r = n-1;
            // if (left > right) {
            //     return ;
            // }
            string new_s ;
            new_s = s;
            check(s , l , r);
            if (new_s == s) {
                return true;
            }
            else {
                return false;
            }
		}
};