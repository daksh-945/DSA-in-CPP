// Problem_01 : Sum of first n naural numbers 
// type : Easy


class Solution{	
	public:
		int NnumbersSum(int N){
            int sum = 0;
			//your code goes here
            if ( N == 0) {
                return 0;
            }
            return N + NnumbersSum(N-1);
		}
};