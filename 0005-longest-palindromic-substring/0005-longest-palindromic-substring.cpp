class Solution {
public:
    int start = 0; // starting of longest substr
    int max_len =1; //len of longhest substr
    
    void expand(string &s, int left, int right)
    {
        //keep expand on both side till elemt are equal
        while( left>=0 and right< s.size() and s[left] == s[right] )
            {   
                int curr_len = right-left+1;
                if(curr_len>max_len)
                    {
                        max_len = curr_len;
                        start = left;
                    }

                left--, right++;
            }        
    }

    string longestPalindrome(string s) 
    {
        int n = s.length();
        //pick the centres of palindrom substr
        for(int i =0;i<n;i++)
            {
                //CASE 1: odd lenght, centr sits on index i
                expand(s,i,i);
                //CASE 2: even lenght palindrom, centr sits on 2 indexes
                expand(s,i,i+1);
            }
        
        return s.substr(start, max_len);

        
    }
};