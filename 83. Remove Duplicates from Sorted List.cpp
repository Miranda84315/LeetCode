/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return NULL;
        ListNode* ans = head;
        while(ans != NULL){
            if(ans->next && (ans->val == ans->next->val)){
                ans->next = ans->next->next;
            }
            else
                ans = ans->next;
        }
        return head;

    }
};