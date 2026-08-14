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
                    mp[s[j]]++; //inceremtn.add itto mapfirst
                    j++;  //then movw forward 
                } 
            //shrink, when more than 2 found
            else if(mp[s[j]] == 2) // elent already exist 2 times. need to kick extra out
                {       
                    while(mp[s[j]] == 2)//when we kcik one extra we can include the curretn same ele at j rigth now  
                        {
                            mp[s[i]]--;//we decremet
                            i++; //shink the wind fromleft   
                        }
                }
            
            max_len = max(max_len,  j-i);
        }

        return max_len;
    }
};