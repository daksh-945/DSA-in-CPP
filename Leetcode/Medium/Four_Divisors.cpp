// Problem_1390 : Four Divisors 


class Solution {
public:
// mene yee question kara khud se hai but gpt ki help leni padii bhout 
// like Tle ke marre
// sqrt(n) use kara ;
// and then baki divisor x = n / y ke rule se nikala 
// i.e x * y = n;
// dooo new baatien  
    int sumFourDivisors(vector<int>& a) {
        vector<int> vec;
        int sum = 0;
        for (int i = 0 ; i < a.size(); i++) {
            // int divisors = 0; 
            vec.clear();    
            for (int j= 1 ; j <= sqrt(a[i]) ; j++) {
                if (a[i] % j == 0) {
                    // divisors++;
                    vec.push_back(j);
                    int temp = a[i]/j;
                    if (j != temp) {
                    vec.push_back(temp); }
                }
            }
            // vec.push_back(a[i]);
            if (vec.size() == 4) {
                sum = sum + accumulate(vec.begin(), vec.end(), 0);
            }
        }
        return sum;
        
    }
};