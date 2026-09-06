class Solution {
public:
    int n,m;
    vector<vector<int>> dp;
    int solve(string& s,string &t, int i, int j)
        {   
            if(j == m)//entire t has been matched, as j++ happen only when thereis match
                {
                    return 1;
                }

            if(i == n) //no idx remain , s is finished
                {
                    return 0;
                }
            if(dp[i][j] != -1) return dp[i][j];

            if(s[i] == t[j])
                {
                    //pick pr dont pick
                    int total_ways = solve(s,t,i+1, j+1) + //possibe ways if we picj s[i]
                                    solve(s,t,i+1,j); // skip s[i] , lets see total ways from remaining s for t

                    //its like, lets see part after t[i] can be formed from remaing part after s[i]
                    dp[i][j] = total_ways;
                    return total_ways;
                }

            //s[i] != t[i], dont pick move forwrd
            return dp[i][j] = solve(s,t,i+1,j);


        }



    int numDistinct(string s, string t) {
        
         n  = s.length();
         m = t.length();

        dp.assign(n, vector<int>(m, -1));

        return solve(s,t, 0,0);

    }
};