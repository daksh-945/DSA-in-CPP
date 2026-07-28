// Problem : deletion of Kth element in ll
// type : easy

// code ;

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
        ListNode* deleteKthNode(ListNode* &head, int k) {
            // Your code goes here
            if (head == nullptr) {
                return head;
            }
            if (k == 1) {
                ListNode* temp = head;
                head = head->next;
                free(temp);
                return head;
            }
            int count = 0;
            ListNode* temp = head;
            ListNode* prev = nullptr;
            while (temp != nullptr) {
                count++;
                if (count == k) {
                    // prev->next = prev->next->next;
                    prev->next = temp->next;
                    free(temp);
                    break;
                }
                prev = temp;
                temp = temp->next;

            }
            return head;
        }
};
