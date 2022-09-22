class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0;
        int maxi = INT_MIN;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                maxi = max(maxi,count);
                count=0;
            }
            else
                count++;
        }
        maxi = max(maxi,count);
        
        return maxi;
    }
};