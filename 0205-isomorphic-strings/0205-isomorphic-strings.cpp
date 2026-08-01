class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {   
        if(s.length()!= t.length()) return false;
        map<char,char> mp1;
        map<char,char> mp2;
        int n = s.length();
        //map each cahrated from s to t
        for(int i = 0;i<n;i++)
            {
                if(mp1.find(s[i])==mp1.end()) // key does not exist,make it 
                    {   
                        // t[i] already belongs to another character
                        if(mp2.find(t[i])!=mp2.end()) return false;

                        mp1[s[i]] = t[i];  //map s[i]--t[i]
                        mp2[t[i]] = s[i];
                                          
                    }               
                // if key s[i] already exist, it must be equal to t[i]
                else{
                    if( (mp1[s[i]]!=t[i]) or  (mp2[t[i]]!=s[i]) ) return false;
                }
            }
        
        return true;



    }
};