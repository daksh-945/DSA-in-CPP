// Leetcode_61: Rotate list 
// Link : https://leetcode.com/problems/rotate-list/
// Beats : 100%
// Example : Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]

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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr) {
            return nullptr;
        }
        if (head -> next  == nullptr) {
            return head;
        }
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        int x = k%count;
        while (x > 0) {
            ListNode* tail = head;
            // ListNode* 
            while ((tail -> next) -> next != nullptr ) {
                tail = tail->next;
            }
            // ListNode* back = tail->
            ListNode* real_tail = tail->next;
            real_tail->next = head;
            tail->next = nullptr;
            head = real_tail;
            x--;
        }
         return head; 
    }
};