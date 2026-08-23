class Solution {
public:
    bool sumGame(string num) 
    {
        int n = num.length();
        //find intial sum of both halves
        int leftSum=0, rightSum =0;
        int left_b=0, right_b =0 ;
        for(int i=0;i<=n/2-1;i++)//left
            {   
                if(isdigit(num[i])) //if its a digit
                {
                    leftSum+= (num[i]-'0');
                    
                }
                if(isdigit(num[n-i-1])) //if its a digit
                {
                    rightSum+= num[n-i-1] - '0';
                }
                
                if(num[i] == '?') left_b++;
                if(num[n-i-1]=='?') right_b++;
                
            }

        int bSum = left_b + right_b;
        if(bSum == 0) //no blanks 
            {
                if(leftSum == rightSum) return false; //both sum equal , bob wins
                else return true; //unequal sum, alice wins         
            }

        if(bSum % 2 == 1) //blmksis odd, alcie always wins
            return true;
        

        int sumDiff = (leftSum - rightSum);
        int blankDiff = ( right_b - left_b);

        return sumDiff != (blankDiff * 9)/2;
        
       

    }
};