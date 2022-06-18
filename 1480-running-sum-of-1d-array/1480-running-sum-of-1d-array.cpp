class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int n = nums.size();
        int  res = 0;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            res+=nums[i];
            ans.push_back(res);
        }
        return ans;
    }
};