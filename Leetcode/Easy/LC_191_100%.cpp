// Lettcode_191 : count number of 1 bits in integer 
// type : https://leetcode.com/problems/number-of-1-bits/
// beats : 100%

// code :

class Solution {
public:
    int hammingWeight(int n) {
        // vector<int> rem;
        int count = 0;
        while ( n > 0 ) {
            int temp = n%2;
            // rem.push_back(temp);
            if ( temp == 1) {
                count++;
            }
            n = n/2;
        }
        return count;
        
    }
};