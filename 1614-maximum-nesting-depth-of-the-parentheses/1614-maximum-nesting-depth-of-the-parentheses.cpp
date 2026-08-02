class Solution {
public:
    int maxDepth(string s) 
    {
        int max_brac = 0;
        int curr_brac=0;
        //traverse the string
        for( char ch : s)
        {
            if(ch == '(')
            {
                curr_brac++;
                if(curr_brac > max_brac)
                    {
                        max_brac = curr_brac;
                    }
            }

            else if(ch == ')') //closing brac
                {
                    curr_brac--;
                }
        }

        return max_brac;
    }
};