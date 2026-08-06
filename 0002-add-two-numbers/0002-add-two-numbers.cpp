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
        int sum = 0;
        int carry = 0;
        while(l1!=NULL or l2!=NULL or carry) //if carrry remaind for the last node
        {   
            sum+= carry;  //add the carry fromprevious sum
            if(l1!=NULL)
                {
                    sum+= l1->val;
                    l1 = l1->next;
                }
            if(l2!=NULL) //check if nodes exist
                {
                    sum+=l2->val; //add the current val
                    l2 = l2->next;
                }

            int digit_place = sum%10;

             carry = sum/10;
            curr->next = new ListNode(digit_place); //make a new node from digits place
            curr = curr->next;  //move cur forwadr
            sum =0; //reset sumfor next iteration


        }

        return dummy->next ; //return head 

    }
};