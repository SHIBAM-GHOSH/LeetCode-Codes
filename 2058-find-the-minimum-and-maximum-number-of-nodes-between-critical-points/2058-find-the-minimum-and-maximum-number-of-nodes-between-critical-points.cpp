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
    vector<int> nodesBetweenCriticalPoints(ListNode* head)
        {   int idx = 1;
            ListNode* a = head;
            ListNode* b = head->next;
            ListNode* c = head->next->next;
            vector<int> IndexList;

            while(c!=NULL)
            {
                if( (a->val < b->val and b->val > c->val ) or
                    (a->val > b->val and b->val < c->val  ) )
                { // critival poit found
                    IndexList.push_back(idx);
                }

                idx++;
                a=a->next;
                b=b->next;
                c=c->next;
            }

            // we got list of crtic point index
            
        int n = IndexList.size();
        if (n < 2) 
            {
                return {-1, -1}; // not enough critical points
            }

        // min distance between consecutive critical points
        int minDist = INT_MAX;
        for (int i = 0; i < n - 1; i++) 
            {
                minDist = min(minDist, IndexList[i + 1] - IndexList[i]);
            }
    
        int maxDist = IndexList.back() - IndexList.front();

            return {minDist, maxDist};
        }
    

};