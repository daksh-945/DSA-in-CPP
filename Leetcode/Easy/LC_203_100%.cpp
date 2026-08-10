// Leetcode_203 : Remove Linked List elements 
// Type : easy 
// Beats 100%
// Example : Input: head = [1,2,6,3,4,5,6], val = 6
// Output: [1,2,3,4,5]

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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) {
            return nullptr;
        }
        // if (head->next == nullptr && head->val == val) {
        //     return nullptr;
        // }
        while (head->val == val) {
            if (head->next == nullptr) {
                return nullptr;
            }
            ListNode* temp = head;
            head = temp->next;
            temp->next = nullptr;
            // free(temp); for malloc 
            delete temp ;
            // for new c++
            // free(temp);
        }
        ListNode* temp = head;
        while (temp -> next  != nullptr) {
            if (temp ->next -> next == nullptr && temp->next ->val == val ) {
                // ListNode* cur = temp->next;
                temp->next = nullptr;
                // temp->next->next = nullptr;
                break;
                
            }
            if (temp->next->val == val) {
                ListNode* cur = temp->next;
                temp->next = temp->next->next;
                cur->next = nullptr;
                continue;
                // free(cur);
            }
            temp = temp->next;

        }
        return head;
    }
};