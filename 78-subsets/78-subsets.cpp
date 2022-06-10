class Solution {
    
private:
    void subsets(vector<int> nums, vector<int> output, int i, vector<vector<int>>& ans)
    {
        
        if(i>=nums.size())
        {
            ans.push_back(output);
            return;
        }
        
        subsets(nums, output, i+1, ans);
        int element = nums[i];
        output.push_back(element);
        subsets(nums,output,i+1,ans);
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> output;
        int i = 0;
        subsets(nums, output, i, ans);
        return ans;
    }
};