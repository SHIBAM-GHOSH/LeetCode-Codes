class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());

        int m = k; //m is the multiple of k, inceresae as we go forward
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]%k == 0 and nums[i]>m) return m;
                if(nums[i]%k == 0 and nums[i] == m) 
                    {
                        m=m+k;
                    }

            }

        return m;

    }
};