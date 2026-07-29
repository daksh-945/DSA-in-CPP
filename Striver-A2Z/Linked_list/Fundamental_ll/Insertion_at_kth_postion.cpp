// Problem: Insertion at kth position 
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
        ListNode* insertAtKthPosition(ListNode* &head, int X, int k) {
            //your code goes here
            if (head == nullptr ) {
                return new ListNode(X);
            }
            // if (head->next == nullptr && k==1) {
            //     return new ListNode(X,head);
            // }
            // if (head->next == nullptr && k == 2) {
            //     ListNode* y = new ListNode(X);
            //     head->next = y;
            //     return head;
            // }
            if (k == 1) {
                ListNode* x = new ListNode(X,head);
                return x;
            }
            int c = 0;
            ListNode* temp = head;
            while (temp != nullptr) {
                c++;
                if (c == k-1 ) {
                    ListNode* y = new ListNode(X);
                    y->next = temp->next;
                    temp->next = y;
                    break;
                }
                temp = temp->next;
            }
            return head;
        }
};