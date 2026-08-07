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
    ListNode* rotateRight(ListNode* head, int k) 
    {   
        if(head == NULL) return head;
        //find lenght of LL
        ListNode* temp = head;
        int n = 1;
        ListNode* tail = NULL;
        while(temp->next!=NULL)
            {
                n++;
                temp = temp->next;
            }
        tail = temp; //tai stand on ;ast ListNode 
        
        //no of nodes to move
        int m = k%n;
        int jumps = n-m-1; // ListNode just before the end grp 
        ListNode* temp1 = head;
        while(jumps--)
        {
            temp1 = temp1->next;
        }

        tail->next = head;
        head = temp1->next;
        temp1->next =NULL;

        return head;

    }
};