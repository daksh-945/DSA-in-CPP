// Problem_07: Armstorng Number ( means number with power == total numbers of digit + .... === actual number );
// type : Easy;

class Solution {
public:
    bool isArmstrong(int n) {
        int new_num = 0;
        int x = n;
        // int y = n;
        int power = 0;
        while ( x != 0) {
            power++;
            x = x / 10;
        }
        x = n;
        while (n != 0) {
            int temp = n % 10;
            int pov = pow(temp,power);
            new_num = new_num + pov;
            n = n/10;
        }
        if (x == new_num) {
            return true;
        }
        else {
            return false;
        }

    }
};