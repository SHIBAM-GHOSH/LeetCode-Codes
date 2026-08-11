class Solution {
public:
    double myPow(double x, int n) 
    {   
        long long power = n;
        if(power==0) return 1;

        if(power<0)
            {
                x = 1/x; power = -power;
            }
        
        double half   = myPow(x,power/2);  //recursce calls get halve at every stage

        if(power%2 == 0) return half * half;

        else return (x* half * half); // 1 powerunit gets removed for odd power
                                        // when divided by 2 for half


    }
};