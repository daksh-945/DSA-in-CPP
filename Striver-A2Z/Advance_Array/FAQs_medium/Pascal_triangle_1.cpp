// Problem : find P[n][r] in pascal triangle 
// type : easy 

// code : 

class Solution {
public:
    int pascalTriangleI(int r, int c) {
        int fact = 1;
        c = c-1;
        for (int i = 1 ; i <= c ; i++) {
            fact = (fact*(r-i))/i;
        }
        return fact;
    }
};