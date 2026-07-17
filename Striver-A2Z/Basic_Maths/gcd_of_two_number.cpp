// Problem_11 : GCD Of Two Number;
// Type : Easy;

class Solution {
public:
    int GCD(int n1,int n2) {
        int c = 1;
        while (c != 0) {
            c = n1%n2;
            n1 = n2;
            n2 = c;
        }
        return n1;
    }
};