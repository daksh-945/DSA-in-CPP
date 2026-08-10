// Leetcode_3263 : convert the dll to array 
// Link : https://leetcode.com/problems/convert-doubly-linked-list-to-array-i/
// Beats : 93%
// Example : Input: head = [1,2,3,4,3,2,1]
// Output: [1,2,3,4,3,2,1]

// Code : 

/**
 * Definition for doubly-linked list.
 * class Node {
 *     int val;
 *     Node* prev;
 *     Node* next;
 *     Node() : val(0), next(nullptr), prev(nullptr) {}
 *     Node(int x) : val(x), next(nullptr), prev(nullptr) {}
 *     Node(int x, Node *prev, Node *next) : val(x), next(next), prev(prev) {}
 * };
 */
class Solution {
public:
	vector<int> toArray(Node *head){
        vector<int> vec;
        Node* temp = head;
        while (temp != nullptr) {
            int x= temp->val;
            vec.push_back(x);
            temp= temp->next;
        }
        return vec;
    }
};