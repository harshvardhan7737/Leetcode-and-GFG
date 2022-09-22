class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        int ans=0;
        bool flag = false;
        int i=0;
        for(i=0; i<m-1; i++)
        {
            if(target < matrix[i+1][0] && target >= matrix[i][0])
            {
                ans = i;
                flag = true;
            }
        }
        if(flag == false)
        ans = i;
        
        for(int i=0; i<n; i++)
        {
            if(matrix[ans][i] == target)
            {
                return true;
            }
        }
        
        return false;
        
    }
};