class Solution {
public:
    string frequencySort(string s) 
    {
        int n = s.length();

        map<char, int> mp1;
        //coutn freq
        for(char ch : s)
            {
                mp1[ch]++;
            }
        
        //sort according ot freq
        priority_queue<pair<int, char>> pq;

        for(auto [key,count] :mp1)
            {
                pq.push({count,key});
            }
        
        //xtarct trhe letetr and make string
        string ans = "";
        while(pq.empty() == false)
            {
                auto[c,letter] = pq.top(); pq.pop();
                //append leter c times
                string w = "";
                while(c--)
                {
                    w+= letter;
                }

                ans+=w;

            }
        return ans;


    }
};