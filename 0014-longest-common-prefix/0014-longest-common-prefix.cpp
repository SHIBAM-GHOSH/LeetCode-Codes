class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n = strs.size();
        sort(strs.begin(), strs.end());

        //take the forst and last word
        string f  = strs[0];
        string l = strs[n-1];

        //get theprefic=x from thse 2 words 
        int i=0,j=0;
        while(i<f.size() and j<l.size())
            {
                //comare each correspoding charate from word
                if(f[i] != l[j]) break;
                i++,j++; // move forward
            }
        

        return f.substr(0, i);  // len i-j+1

         
    }
};