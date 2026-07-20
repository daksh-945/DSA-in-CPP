// Problem_02: Factorial of a given number 
// type : easy


class Solution{	
	public:
		long long int factorial(int n){
			//your code goes here
            if ( n == 0) {
                return 1;
            }
            return n * factorial(n-1);
		}
};