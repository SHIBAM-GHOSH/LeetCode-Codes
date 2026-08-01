class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        int n = s.length();
        if(n!=goal.length()) return false;

        //keep rotating  s for n times untilwe get correct goal
        while(n--)
        {
            if(s==goal) return true;

            //rotate
            char first = s[0];
            s.erase(0,1);
            s.push_back(first);
        }

        return false;
    }
};