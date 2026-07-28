// Type easy 
// problem : deletion by head

/*
Definition of singly linked list:
class ListNode{
  
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
public:
    ListNode* deleteHead(ListNode* &head) {
        //your code goes here
        if ( head == nullptr) {
            return nullptr;
        }
        ListNode* temp = head ;
        head = head->next;
        free(temp);
        return head;
    }
};