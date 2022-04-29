class Solution {
public:
    int climbStairs(int n) {
        
        int var1=1,var2=1;
        int temp = 0;
        
        if(n==1)
            return 1;
        
        for(int i=0; i<n-1; i++)
        {
            temp = var1;
            var1 = var1+var2;
            var2 = temp;
        }
        return var1;
        
    }
};