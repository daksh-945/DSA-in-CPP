// Leetcode_876: return middle element of the list 
// Link : https://leetcode.com/problems/middle-of-the-linked-list/
// Beats : 100%
// Example : Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]
// Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.

// Code : 

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
    ListNode* middleNode(ListNode* head) {
        int c = 0;
        int s = 0;
        // can we done by two pointer also , more easier approch
        ListNode* temp = head;
        while (temp != nullptr) {
            temp = temp->next;
            s++;
        }
        temp = head;
        while (temp != nullptr) {
            c++;
            if (c == (s/2)+1) {
                return temp;
            }
            temp = temp->next;
        }
        return temp;
    }
};