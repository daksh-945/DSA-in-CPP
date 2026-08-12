// Leetcode_83: Remove duplicate from sorted list
// Link https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Beats : 100%
// Example: Input: head = [1,1,2]
// Output: [1,2]

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while (temp != nullptr) {
            if (temp->next == nullptr){
                
                return head;
            }
            if (temp ->val == temp->next->val) {
                if (temp->next->next == nullptr) {
                    temp->next = nullptr;
                    continue;
                }
                temp->next = temp->next->next;
                continue;
            } 
            temp = temp->next;
        }
        return head;
    }
};