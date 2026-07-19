// Problem_02 : Palindrome check 
// type : easy


class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            int n = s.length();
            string t(n, ' ') ;
            int k = n-1 ;
            for (int i= 0 ; i < n; i++) {
                t[i] = s[k--];
            }
            int count = 0;
            for (int i =0 ; i < n; i++){
                if (t[i] != s[i]) {
                    count = 1;
                    break;
                }
            }
            if ( count == 0) {
                return true;
            }
            return false;
 		}
};