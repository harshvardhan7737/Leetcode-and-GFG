class Solution {
public:
    vector<int> partitionLabels(string s) {
        int l=0;
        int h = s.size()-1;
        vector<vector<int>> ans;
        set<char> ourset;
        
        for(int i=0; i<s.size(); i++)
        {
            h = s.size()-1;
            
            while(h>=i) 
            {
                if(s[i]==s[h] && ourset.find(s[i])==ourset.end())
                {
                    ourset.insert(s[i]);
                    ans.push_back({i,h});
                    break;
                }
                
                h--;         
            }       
        }
        
        vector<vector<int>> res;
        vector<int> temp;
        res.push_back(ans[0]);
        
        for(int i=1; i<ans.size(); i++)
        {
            if(res[res.size()-1][1] > ans[i][0])
            {
                res[res.size()-1][1] = max(res[res.size()-1][1],ans[i][1]);
            }
            
            else
            {
                res.push_back(ans[i]);
            }
        }
        
        for(int i=0; i<res.size(); i++)
        {
         temp.push_back(res[i][1] - res[i][0] + 1);
        }
        
        return temp;
    }
    
};