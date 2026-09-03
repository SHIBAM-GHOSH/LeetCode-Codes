class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();

        int m = n/2;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }

        //chekc the map for majoritu element
        for(auto k : mp)
        {
            if(k.second > m) return k.first;
        }

        return nums[0];
    }
};