// Problem: insertion before given value 
// type easy 

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
        ListNode* insertBeforeX(ListNode* &head, int X, int val) {
            //your code goes here
            if (head == nullptr) {
                return nullptr;
            }
            if (head->data == X) {
                return new ListNode(val, head);
            }
            ListNode* temp = head;
            while (temp->next != nullptr) {
                if (temp->next->data == X) {
                    ListNode* y = new ListNode(val);
                    y->next = temp->next;
                    temp->next = y;
                    break;
                }
                temp = temp->next;
            }
            return head;
        }
};