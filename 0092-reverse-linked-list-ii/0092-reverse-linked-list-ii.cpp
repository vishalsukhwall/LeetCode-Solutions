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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* prev;
        ListNode* curr;
        ListNode* next;

        prev = NULL;
        curr = head;
        next = NULL;

        for(int i=1; i<left; i++){
            prev = curr;
            curr = curr->next;
        }

        ListNode* start = prev;
        ListNode* end = curr;

        int step = right - left + 1;

        while(step > 0){
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
            step--;
        }

        if(start != NULL){
            start->next = prev;
        }
        else{
            head = prev;
        }
        end->next = curr;
        return head;
    }
};