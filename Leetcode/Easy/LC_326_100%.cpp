// Leetcode_326 : check if the given number is in 3 power of something or not
// link : https://leetcode.com/problems/power-of-three/
// beats: 100%
// Example : Input: n = 27
// Output: true
// Explanation: 27 = 33

// code :

class Solution {
public:
    bool isPowerOfThree(int n) {
        if ( n == 1) {
            return true;
        }
        if ( n <= 0) {
            return false;
        }
        while (n > 1) {
            if (n%3 == 0) {
                n = n/3;
                continue;
            }
            return false;
        }
        return true;
    }
};
// for tc tpo be O(1) we can check is 3^19 is divisible bb n if yes then true else false 