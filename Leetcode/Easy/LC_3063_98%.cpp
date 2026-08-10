// Leetcode_3063: Linked list frequency
// Link : https://leetcode.com/problems/linked-list-frequency/
// Beats : 98%
// Example : Input: head = [1,1,2,1,2,3]
// Output: [3,2,1]

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
    ListNode* frequenciesOfElements(ListNode* head) {
        int mxx = INT_MIN;
        ListNode* temp = head;
        int n = 0;
        // use unordered map 
        if (head == nullptr) {
            return nullptr;
        }
        while (temp != nullptr) {
            n++;
            int cur = temp->val;
            mxx = max(cur,mxx);
            temp = temp->next;
        }
        temp = head;
        vector<int> hash(mxx+1,0) ;
        while (temp != 0) {
            hash[temp->val]++;
            temp = temp->next; 
        }
        ListNode* vec;
        int count = 0;
        for (int i = 0 ; i < mxx+1; i++) {
            if (hash[i] > 0) {
                if (count == 0) {
                   ListNode* a = new ListNode(hash[i]);
                   vec = a;
                   count++;
                   temp = vec;
                   continue;
                }
                // vec->next = hash[i];
                ListNode* a = new ListNode(hash[i]);
                temp->next = a;
                temp = temp->next;
            }
        }
        return vec;
    }
};