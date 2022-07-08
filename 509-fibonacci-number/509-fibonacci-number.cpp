class Solution {
public:
    int sum = 0;
    int fib(int n) {
        
        if(n==0 || n==1)
            return n;
        
        int ans[31] = {0};
        ans[0] = 0;
        ans[1] = 1;
        
        for(int i=2; i<=n; i++)
        {
            ans[i] = ans[i-1]+ans[i-2];
        }
    return ans[n];
    }
};