class Solution {
public:
    string largestOddNumber(string num)
    {
        int n = num.size();

        for(int i = n-1;i>=0;i--)
        {
            int k  = num[i] - '0'; //char to int 
            if(k%2 == 1) //odd int substr
            {
                return num.substr(0,i+1);
            }
        }

        return "";
        
    }
};