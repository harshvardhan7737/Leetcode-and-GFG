class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int l = 0;
        int r = nums.size()-1;
        int mid = l+((r-l)/2);
        
        while(l<=r)
        {
            if(nums[mid]==target)
                return mid;
            
            else if(nums[mid]<target)
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
            mid = l+((r-l)/2);
        }
        return mid;
        
    }
};