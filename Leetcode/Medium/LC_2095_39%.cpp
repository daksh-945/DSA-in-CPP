// Leetcode_2095 : Delete the middle element of list 
// Link : https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
// Beats : 35%
// Example : Input: head = [1,3,4,7,1,2,6]
// Output: [1,3,4,1,2,6]
// Explanation:
// The above figure represents the given linked list. The indices of the nodes are written below.
// Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
// We return the new list after removing this node. 

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
    ListNode* deleteMiddle(ListNode* head) {
        // int low = 0;
        int n = 0;
        // try Two pointer approch 
        ListNode* temp = head;
        while (temp != nullptr) {
            temp = temp->next;
            n++;
        }
        if (head == nullptr) {
            return nullptr;
        }
        if (head ->next == nullptr) {
            return nullptr;
        }
        temp = head;
        int c = 1;
        while ( c != n/2) {
            temp = temp->next;
            c++;
        }
        ListNode* extra = temp->next;
        temp->next = extra->next;
        extra->next = nullptr;
        delete extra;
        return head;
        // int high = n-1;
        // temp = head;
        // while (low < high) {
        //     low++;
        //     high--;
        //     temp = temp->next;
        //     if (low >= high) {
        //         break;
        //     }
        // }
        // ListNode* back = temp
    }
};