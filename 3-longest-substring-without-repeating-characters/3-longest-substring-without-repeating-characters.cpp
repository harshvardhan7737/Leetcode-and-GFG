class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int cnt=0,m=0;
        unordered_set<int> se;
        int ans = 0;
        int i=0, j=0;
        
        while(i<s.size() && j<s.size())
        {
            if(se.find(s[j]) == se.end())
            {
                se.insert(s[j++]);
                ans = max(ans, j-i);
            }
            else
            {
                se.erase(s[i++]);
            }
        }
        return ans;
        
        
    }
};