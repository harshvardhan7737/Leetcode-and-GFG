class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int presum = 0;
        int count = 0;
        unordered_map<int,int> m;

        for(int i=0; i<nums.size(); i++)
        {
            
            presum+=nums[i];
            
            if(presum==k)
            {
                count++;
            }
            
            if(m.find(presum-k) != m.end())
                count = count + m[presum-k];
            
            m[presum]++;
            
        }
        return count;
    }
};