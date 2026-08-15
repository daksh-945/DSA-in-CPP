// Leetcode_412 : Fizz Buzz
// Link : https://leetcode.com/problems/fizz-buzz/
// Example : Input: n = 15
// Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
// Beats : 32%

// Code : 

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;
        for (int i = 0 ; i < n; i++) {
            if (((i+1) % 3)== 0 && ((i+1) % 5) == 0) {
                s.push_back("FizzBuzz");
            }
            else if (((i+1) % 3) == 0) {
                s.push_back("Fizz");
            }
            else if (((i+1) % 5) == 0) {
                s.push_back("Buzz");
            }
            else {
                int m = i+1;
                s.push_back(to_string(m));
            }
        }
        return s;
    }
};