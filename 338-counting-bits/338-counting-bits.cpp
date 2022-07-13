class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> table(n+1,0);
        for(int i=0; i<=n; i++)
        {
            
            table[i] = (i&1) + table[i/2];
        }
     return table;    
    }
};