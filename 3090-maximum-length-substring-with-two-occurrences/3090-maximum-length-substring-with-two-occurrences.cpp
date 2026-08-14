class Solution {
public:
    int maximumLengthSubstring(string s) 
    {
        //can use 2 pointer 
        int n = s.length();
        int i=0, j=0;
        map<char, int> mp;
        int max_len = 0;
        
        while( j<n)
        {
            //expand
            if( mp[s[j]]<2)
                {
                    mp[s[j]]++; //inceremtn
                    j++;
                }
            
            //shrink, when more than 2 found
            else if(mp[s[j]] == 2) //already 2 ele exist
                {   
                    
                        mp[s[i]]--;
                        i++; //shink the wind fromleft     
                   
                }
            
            max_len = max(max_len,  j-i);
        }

        return max_len;
    }
};