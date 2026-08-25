class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        unordered_set<int> s(nums.begin(), nums.end());


        int m =k;
        while( s.count(m)) // false when multiple fo k i.e is not thses in set
        {
            m=m+k;
        }

        return m;



    }
};