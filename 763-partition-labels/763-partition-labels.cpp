class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char,int> m;
        
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]] = i;
        }
        
        vector<int> ans;
        int maximum=0;
        int prev = -1;
        
        for(int i=0; i<s.size(); i++)
        {
           maximum = max(maximum,m[s[i]]);
            
            if(maximum == i)
            {
                ans.push_back(i - prev);
                prev = i;
            }
        }
        return ans;
    }
};