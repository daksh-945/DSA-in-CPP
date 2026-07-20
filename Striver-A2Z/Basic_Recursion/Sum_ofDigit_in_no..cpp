// Problem_09 : sum of digits of number til n < 10 
// type: easy 


class Solution{
public:
	int addDigits(int n1){
		//your code goes here
        // int n_sum = sum(n);
        if (n1 < 10) {
            return n1;
        }
        // else {
            n1 = sum(n1);
            return addDigits(n1);

        // }
        
	}
    int sum(int n) {
        if (n == 0) {
            return 0 ;
        }
        return n%10 + sum(n/10);
    }
};