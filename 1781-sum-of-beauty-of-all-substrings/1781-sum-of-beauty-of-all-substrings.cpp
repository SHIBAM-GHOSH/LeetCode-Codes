class Solution {
public:
    int beautySum(string s) 
    {
        int n = s.size();
        int ans =0;
        //travers the string 
        for(int i =0;i<n;i++)//set starting point of string 
        {
            //vector for freq count
            vector<int> freq(26, 0);
            for(int j=i;j<n;j++)//construc the string fom statin point , step by step
            {
                freq[s[j]-'a']++; // update the fre map every time wwe add a char to string
                int mx = 0;
                int mn  = INT_MAX;
                //get the max, min freq
                for(auto f : freq)
                {
                    if(f==0) continue;
                    if(f>mx) mx=f;
                    if(f<mn) mn =f;
                }
                ans+= (mx-mn);
            }
        }

        return ans;
    }
};