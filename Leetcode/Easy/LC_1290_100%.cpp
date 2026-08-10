// Leetcode_1290 : covert binary list to decimal number 
// Link : https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
// Beats : 100%
// Example : Input: head = [1,0,1]
// Output: 5
// Explanation: (101) in base 2 = (5) in base 10

// Code ; 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num = 0;
        ListNode* temp = head;
        int i = 0; 
        while (temp != nullptr ) {
            i++;
            temp = temp->next;
        }
        i = i-1;
        temp = head;
        while ( temp != nullptr) {
            num = num + (temp->val)*(pow(2,i));
            i--;
            temp = temp->next;
        }
        return num;

    }
};