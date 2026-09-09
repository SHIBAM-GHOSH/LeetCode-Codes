class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n = s.length();

        map<char, int> mp;
        int i =0;
        int j = 0;
        int ans =0;

        while(j<n)
        {
            //expand the window
            mp[s[j]]++;
            //shrink window is duplicate found, shrink until duplicaet remove
            while(mp[s[j]]>1)
                {
                    mp[s[i]]--; i++;
                }

            //measure window size
            ans = max(ans, j-i+1);
            j++;

        }

        return ans;

        



    }
};