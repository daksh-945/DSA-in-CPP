// Problem : insertion at tail
// type : easy

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
        ListNode* insertAtTail(ListNode* &head, int X) {
            //your code goes here
            if (head == nullptr) {
                return new ListNode(X , head);
            }
            ListNode* temp = head;
            while ( temp->next != nullptr) {
                temp = temp->next;
            } 
            ListNode* a = new ListNode(X);
            temp->next = a;
            return head;
        }
};