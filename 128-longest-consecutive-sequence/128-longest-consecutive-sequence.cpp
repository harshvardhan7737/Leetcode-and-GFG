class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=1;
        int m = 1,n=0;
        int s = nums.size();
        sort(nums.begin(), nums.end());
        
        if(s==1)
            return count;
        if(s==0)
            return 0;
        
        for(int i=0; i<s-1; i++)
        {

            if(nums[i]==nums[i+1])
                continue;
            
            else if(nums[i]==nums[i+1]-1)
            {
                count++;
            }
            else
                count=1;
            
            m = max(count, m);
        
        }
        
        // if(nums[s-1] == nums[s-2]+1)
        //     m++;
        
        return m;
    }
};