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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;

        while(count < k){
            if(temp == NULL){
                return head;
            }
            temp = temp->next;
            count++;
        }

        ListNode* preNode = reverseKGroup(temp , k);

        count = 0 , temp = head;
        while(count < k){
            ListNode* next = temp->next;

            temp->next = preNode;
            preNode = temp;
            temp = next;
            count++;

        }

        return preNode;
    }
};