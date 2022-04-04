class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size()-1;
        vector<int> ans;
        
         if(nums.size()==0)
        return{-1,-1};
        
        while(left<=right)
        {
            int mid = (left+right)/2;
            
            if(nums[mid]==target)
            {
                    while(nums[left]!=target) 
                    left++;
                    ans.push_back(left);
                    while(nums[right]!=target)
                    right--;
                    ans.push_back(right);                
                return ans;
            }
            
            else if(nums[mid]<target)
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }        
        
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
        
    }
};