class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) 
    {
        int n = nums.size();
        //we make 2 vectors 1 stors the smallest in[0,i] , another smallest in [i,n-1]
        int smallest = INT_MAX;
        vector<int> suffixMin(n);
        for(int i =n-1;i>=0;i--)
        {
             smallest = min(smallest, nums[i]);
            suffixMin[i] = smallest;
        }

        //now we travesr the array to fons the stabilit index least
        int largest = INT_MIN;
        //int ans = 0; //smallest stable index
        int curr_score =0;
        for(int i=0;i<n;i++)
        {
            largest = max(largest, nums[i]);
            curr_score =  largest - suffixMin[i];
            if(curr_score <=k) //stable index
                {
                    return i;
                }

        }

        return -1;


    }
};