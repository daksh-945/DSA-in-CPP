// Problem_682 : BaseBall game  
// Example : Input: ops = ["5","2","C","D","+"]
// Output: 30
// Explanation:
// "5" - Add 5 to the record, record is now [5].
// "2" - Add 2 to the record, record is now [5, 2].
// "C" - Invalidate and remove the previous score, record is now [5].
// "D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
// "+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
// The total sum is 5 + 10 + 15 = 30.
// Link : https://leetcode.com/problems/baseball-game/

// Code :: 

class Solution {
public:
    int calPoints(vector<string>& operations) {
    int n = operations.size();
    vector<int> vec;
    int count = 0;
    for (int i= 0 ;i < n; i++) {
        int x = vec.size();
        if ( x > 0) {
            x = x-1;
            count = 0;
        }
        else {
            count = 1;
        }
        if (operations[i] == "C") {
           if ( count == 1) {
            continue;
           }
           else {
            vec.pop_back();
           }
        }
        else if (operations[i] == "+" ) {
            if (count == 1) {
                continue;
            }
            else if (x == 0 && count != 1) {
                vec.push_back(vec[x]);
            }
            else {
                int first = vec[x];
                int second = vec[x-1];
                vec.push_back(first + second);
            }
        }
        else if (operations[i] == "D") {
            if (count == 1) {
                continue;
            }
            int first = 2 * vec[x];
            vec.push_back(first);
        }
        else {
            int c = stoi(operations[i]);
            vec.push_back(c);
        }
    }
    int total = 0;
    for (int x : vec) {
        total = total + x;
    }
    return total;
    }
};