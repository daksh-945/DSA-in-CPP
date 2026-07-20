// Problem_04 : reverse a string using recurison only;
// type: easy


class Solution{	
public:	
    void reverse(vector<char>& s , int left , int right) {
        if (left >= right ) {
            return ;
        }
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        reverse(s , left+1, right-1);
    }


	vector<char> reverseString(vector<char>& s){
		//your code goes here
        int n = s.size();
        int left = 0;
        int right = n-1;
        reverse( s , left , right);
        return s;
	}
};
