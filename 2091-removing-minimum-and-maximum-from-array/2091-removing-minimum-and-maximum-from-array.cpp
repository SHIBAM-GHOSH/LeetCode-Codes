class Solution {
public:
    int minimumDeletions(vector<int>& nums) 
    {
        int n = nums.size();
        int min_idx;
        int max_idx;
        int mi = INT_MAX, ma = INT_MIN;
        for(int i =0;i<n;i++)
        {
            if(nums[i]> ma){ //find the maxele, and its idx
                ma = nums[i];
                max_idx = i;
            }
            if(nums[i]<mi)  // find the min ele and its Idx
                {
                    mi = nums[i];
                    min_idx = i;
                }
            
        }

       int left = min(min_idx, max_idx);
       int right  = max(min_idx, max_idx);
       //when delet every thign from left
       int p1 = right+1;
       //when delet both from back side
       int p2 = n-left;
       //delete both starting from left and right
        int p3 = (left+1) + (n-right);

        return min({p1,p2,p3});

    }
};