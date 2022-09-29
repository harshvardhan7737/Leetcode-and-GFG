class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int> m;
        
        for(int i=0; i<s.size(); i++)
            m[s[i]]++;
        
        int cnt = 0;
        
        for(auto i = m.begin(); i != m.end(); i++)
        {
            if((i->second)%2 != 0)
                cnt++;
            // cout << cnt  << endl;
        }
        
        if(s.size() == 1)
        {
            return 1;
        }
        else if(cnt <= 1)
            return s.size();
        else
        return s.size()-cnt+1;
        
    }
};