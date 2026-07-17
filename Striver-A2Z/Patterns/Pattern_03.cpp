// Problem: Pattern 03 ( number triangle ) 
// Source: Striver A2Z Sheet
// link:https: //takeuforward.org/plus/dsa/problems/pattern-3?subject=dsa
// Difficulty: Easy

class Solution {
public:
    void pattern3(int n) {
        for (int i= 1 ; i <= n; i++) {
            for (int j= 1 ; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};