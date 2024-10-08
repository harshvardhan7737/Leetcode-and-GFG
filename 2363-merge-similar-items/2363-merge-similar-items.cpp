class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        
        map<int,int> m;
        
        for(int i=0; i<items1.size(); i++)
        {
            m[items1[i][0]] = items1[i][1];
        }
        
        for(int i=0; i<items2.size(); i++)
        {
            if(m.find(items2[i][0]) != m.end())
               m[items2[i][0]] += items2[i][1];
               
             else
               {
                   m[items2[i][0]] = items2[i][1];
               }
        }
        
        vector<vector<int>> result;
        for(auto it:m)
        {
            result.push_back({it.first, it.second});
        }
        return result;
    }
};