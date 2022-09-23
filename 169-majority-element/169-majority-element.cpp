class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
        int maxi = 0;
        unordered_map<int,int>h;
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            h[nums[i]]++;
        }
        
        for(auto i : h)
        {
            if(maxi < i.second)
            {
                if(i.second > nums.size()/2)
                    ans = i.first;
                
                maxi = i.second;
            }
        }

        return ans;
    }
};