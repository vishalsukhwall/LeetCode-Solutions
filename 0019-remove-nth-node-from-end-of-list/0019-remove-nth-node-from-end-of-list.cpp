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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* temp = head;

        while(temp != NULL){
            length += 1;
            temp = temp->next;
        }

        if(length == n){
            ListNode* temp = head->next;
            delete head;
            return temp;
        }

        int travel = length - n;
        ListNode* prev = NULL;
        ListNode* temp1 = head;

        while(travel--){
            prev = temp1;
            temp1 = temp1->next;
        }

        prev->next = temp1->next;
        delete temp1;

        return head;
    }
};