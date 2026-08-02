class Solution {
public:
    bool isAnagram(string s, string t) 
    {   
        if(s.length() != t.length()) return false;
        vector<int>freq(26,0); // vectorfor countin 26 Letters freq

        //travers the string s
        for(char ch : s)
            {
                freq[ch-'a']++;
            }
        
        //subratc freq from t
        for(char k : t)
            {
                freq[k-'a']--;
            }
        
        for(int i : freq)
            {
                if(i!=0) return false;
            }

        return true;


    }
};