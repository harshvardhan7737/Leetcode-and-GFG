class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
        int res = 0,curr=0;
        unordered_set <int> s;
        
        for(int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(nums[i]-1) == s.end())
            {
                curr = 1;
                while(s.find(nums[i]+curr) != s.end())
                {
                    curr++;
                }
                res = max(res,curr);
            }
        }
        // res = max(res,curr);
        return res;
    }
};