class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        string ans="";
        int balance=0;

        //tarverse the strign 
        for(char ch: s)
            {
                if(ch=='(')
                    {    
                        if(balance>0) // this isnot the ouetr most layer
                            {
                                ans+=ch;
                            }
                        balance++;
                    }
                else if(ch == ')') // closing braceet
                    {   
                        balance--;                      
                        if(balance>0) // this was notthe outer bracket
                            {
                                ans+=ch;
                            }
                        
                    }
            }
        return ans;
    }
};