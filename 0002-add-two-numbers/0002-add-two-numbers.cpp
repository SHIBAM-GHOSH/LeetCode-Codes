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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        int carry = 0;
        int sum = 0;
        while(l1!=NULL or l2!=NULL or carry)
        {
            sum += carry;
            if(l1!=NULL)
                {
                    sum += l1->val;
                    l1=l1->next;
                }

            if(l2!=NULL)
                {
                    sum += l2->val;
                    l2=l2->next;
                }

            int ones = sum%10;
            carry = sum/10;
            curr->next = new ListNode(ones);
            curr = curr->next;
            sum = 0;
        }
        return dummy->next;

    }
};