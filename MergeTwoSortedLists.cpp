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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3;
        ListNode* first = l1;
        ListNode* ret;
        if((l1 == NULL) && (l2 == NULL))
            return l1;
        if((l1 == NULL) && (l2 != NULL))
            return l2;
        if((l2 == NULL) && (l1 != NULL))
            return l1;

        if(l1->val >= l2->val){
            l1 = l2;
            l2 = first;
            first = l1;
        }
        
        ret = l1;
        l1 = l1->next;
        while(l1 != NULL)
        {
            while(l2 != NULL)
            {
                if(l2->val <= l1->val){
                    l3 = new ListNode(l2->val);
                    l3->next = l1;
                    ret->next = l3;
                    ret = l3;
                    l2 = l2->next;
                }
                else
                    break;
                
            }
            ret = l1;
            l1 = l1->next;
        }
        //ret = ret->next;
        if(l2 != NULL){
            ret->next = l2;
        }
            
        return first;
    }
};