class Solution {
public:
    
    int GCD(int a,int b)
    {
        if(b==0)
            return a;
        else
            return GCD(b,a%b);
    }
    
    int findGCD(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int a = nums[0];
        int b = nums[n-1];
        
        return GCD(a,b);
    }
};