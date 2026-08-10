// Leetcode_3294 : Convert the ddl into array by only node given 
// Link : https://leetcode.com/problems/convert-doubly-linked-list-to-array-ii/
// Beats : 54%
// Example : Input: head = [4,5,6,7,8], node = 6
// Output: [4,5,6,7,8]

// Code ; 

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
	vector<int> toArray(Node *node){
    vector<int> vec;
    Node* temp = node;
    // try to use two pointer 
    int n = 0;
    while (temp != nullptr) {
       int x = temp->val;
       vec.push_back(x);
       temp = temp->prev;
       n++;
    }   
    int i = 0 , j = n-1;
    while (i <= j) {
        swap(vec[i++], vec[j--]);
    }
    temp = node->next;
    while (temp != nullptr) {
        int x = temp->val;
        vec.push_back(x);
        temp = temp->next;
    }
    return vec;
    
    }
};

