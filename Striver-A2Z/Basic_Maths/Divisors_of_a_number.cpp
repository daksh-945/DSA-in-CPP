// Problem_13: Divisors of a Number
// Type: Easy


class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> vec;
        for (int i=1 ; i <= n ; i++) {
            if ( n%i == 0) {
                vec.push_back(i);
            }
        }
        return vec;
    }
};