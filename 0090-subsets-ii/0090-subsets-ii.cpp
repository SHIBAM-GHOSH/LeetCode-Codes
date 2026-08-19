class Solution {
public:
    vector<vector<int>> ans;
    int n;
    void solve(vector<int>& nums, vector<int>&curr_list, int idx )
    {   
        if(idx == n){ //end of list, no more numbers available
                ans.push_back(curr_list);
                return;
            }
        
         //1. pick branch first 
        curr_list.push_back(nums[idx]);
        solve(nums, curr_list, idx+1);
        //backtrack, 
        curr_list.pop_back();

        //dont pick, so leave all simialr elemnt to elelnt at idx
        while(idx<n-1 and nums[idx]==nums[idx+1]  )
        {
            idx++;
        } 
        solve(nums,curr_list, idx+1);
       

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        n = nums.size();
        ans.clear();

        sort(nums.begin() , nums.end());

        vector<int> curr_list;
        solve(nums, curr_list, 0);
        return ans;
        

    }
};