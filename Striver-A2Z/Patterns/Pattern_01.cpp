// Problem: Pattern 1
// Source: Striver A2Z Sheet
// link: https://takeuforward.org/plus/dsa/problems/pattern-1?subject=dsa 
// Difficulty: Easy

class Solution {
public:
    void pattern1(int n) {
        for (int i = 0 ; i < n; i++) {
            for ( int j = 0 ; j < n; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};
