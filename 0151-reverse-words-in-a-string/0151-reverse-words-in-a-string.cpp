class Solution {
public:
    vector<string> split(string s, char delim)
    {
        vector<string> ans;
        stringstream ss(s);
        string token;

        while(getline(ss, token, delim))
            {   
                if(token.empty() == false)
                    {
                        ans.push_back(token);
                    }
                

            }
        return ans;

    }
    string reverseWords(string s) 
    {
        vector<string> k = split(s,' ');

        reverse(k.begin(), k.end());

        string ans="";
        //make the line from words
        int n = k.size();
        for(int i=0;i<n;i++)
        {
            ans = ans+k[i];
            if(i!= n-1) // i is not last index.add space
            {
                ans+=" "; // add single space
            }
        }
        return ans;
    }
};