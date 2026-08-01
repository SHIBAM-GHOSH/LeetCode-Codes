class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!= t.size()) // if word size not same , then not isomorphic
          {  return false; 
          }
        // means s & t are of equal length
        // create a vector to store the difference at the ascii value of alphabets
        vector<int> v(150, 1000); // difference btw ascii values of alphbet never>1000
        // traverse with respect to string s and store diff at s string alphbt position
        for(int i =0 ; i<s.size() ; i++)
        {  
            int idx = (int)s[i];
            
            if(v[idx]==1000)  // 1000 present means it's empty, so fill with the diff
             {v[idx] = s[i]-t[i]; }
            else if(v[idx]!= s[i]-t[i] ) // value already present at v[idx], but new value from obtained from both stringd
              { return false; } // means one alphabet maps to 2 in other string, return false 
        } 
        // now from t string's perspective
        // empty the vector, for filling valuse with respect to string t
        for(int i =0; i<v.size(); i++)
         {  v[i]= 1000;
         }
        for(int i =0 ; i<t.size() ; i++)
        {  int idx = (int)t[i];
             if(v[idx]==1000)  
                        {v[idx] = t[i]-s[i]; }
             else if(v[idx]!= t[i]-s[i] ) 
                         { return false; }  
            
    }
       return true;
    }
};
