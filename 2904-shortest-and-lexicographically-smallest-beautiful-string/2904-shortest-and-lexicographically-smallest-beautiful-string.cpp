class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) 
    {
        int n = s.length();

        string ans ="";
        int i=0;
        int ones = 0;

        for(int j=0;j<n;j++)
            {
                if(s[j] == '1') ones++;
                //more than 1 k
                while(ones>k)
                    {
                        if(s[i] == '1') ones--;
                        i++;
                    }
                //excatky k ones in curr subtr (i,j)
                if(ones == k)
                {
                    while(s[i] == '0') i++;
                    string curr = s.substr(i, j-i+1);
                    //this curr contain k ones 
                    //check thesub string
                    if( ans == "" or curr.length() < ans.length() or
                         ans.length() == curr.length() and curr<ans )
                    {
                        ans = curr;
                    }

                    
                }

            }

        return (ans);

    }
};