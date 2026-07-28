// Problem : deletion of given value in ll 
// type : easy

// code :

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
        ListNode* deleteNodeWithValueX(ListNode* &head, int x) {
            //your code goes here
            if (head == nullptr) {
                return nullptr;
            }
            if (head->data == x) {
                ListNode* temp = head;
                head = head->next;
                free(temp);
                return head;
            }
            ListNode* temp = head;
            ListNode* prev = nullptr;
            while (temp != nullptr) {
                if (temp->data == x) {
                    prev->next = prev->next->next;
                    free(temp);
                    break;
                }
                prev = temp;
                temp = temp->next;
            }
            return head;

        }
};