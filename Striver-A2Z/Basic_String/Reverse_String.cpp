// Problem_01 : Reverse a string
// type : easy


class Solution{	
	public:		
		void reverseString(vector<char>& s){
			//your code goes here
            int n = s.size();
            vector<char> t;
            for (int i=n-1 ; i >= 0; i--) {
                t.push_back(s[i]);
            }
            s.clear();
            for (int i= 0 ; i < n; i++) {
                s.push_back(t[i]);
            }
		}
};