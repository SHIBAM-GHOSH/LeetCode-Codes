class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];

        sort(strs.begin(), strs.end());
        // compare the first and last strings from vector after sorting
        int n  = strs.size();
        string first = strs[0];
        string last = strs[n-1];
        string s = "";  // for storing the prefix

        for(int i =0; i< min(first.size(), last.size()); i++)
           {     if( first[i]== last[i])
                   {  s+=first[i];  }
                  else return s;
           }
        return s;   
        
    }
};