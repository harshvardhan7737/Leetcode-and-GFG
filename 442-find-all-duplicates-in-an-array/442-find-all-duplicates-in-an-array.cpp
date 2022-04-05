class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        
        if(nums.size()==1)
            return ans;
        
        sort(nums.begin(),nums.end());
        
        int i=0;
        
        while(i<nums.size()-1)
        {
            if((nums[i]^nums[i+1])==0)
            {
                ans.push_back(nums[i]);
                i+=2;
            }
            else
                i++;
        }         
       return ans;
    }
};