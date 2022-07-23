class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int l = 0;
        int h = 0;
        int count=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        while(l<g.size() && h<s.size())
        {
             while(h < s.size() && g[l] > s[h])
                h++;
            
               if(h < s.size())
                count++, h++;
            
            l++;
        }
        
        return count;
        
    }
};