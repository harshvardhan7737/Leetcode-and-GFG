class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int maxlen = 0;
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            nums[i] = (nums[i]==0) ? -1 : 1;
        }
        
        unordered_map <int, int> m;
        
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            
            if(sum == 0)
            {
                maxlen = i+1;
            }
            
            if(m.find(sum) != m.end())
            {
                if(maxlen < i - m[sum])
                {
                    maxlen = i-m[sum];
                }
            }
            else
            {
                m[sum] = i;
            }
            
        }
        return maxlen;
    }
};