class Solution {
public:
    long long int divide(long long int dividend, long long int divisor) {
        
        if(dividend==INT_MIN&&divisor==-1)return INT_MAX;
        bool neg = ((dividend>=0)==(divisor>=0))?true:false;
        long long int ans = 0;
        
        dividend = abs(dividend);
        divisor = abs(divisor);
        
      while((dividend-divisor)>=0)
      {
            int cnt=0;
            while(dividend>=(divisor<<cnt))cnt++;
            ans+=(1<<(cnt-1));
            dividend-=divisor<<(cnt-1);
        }
        
        if(ans>INT_MAX) return (neg)?INT_MAX:INT_MIN;
        return (neg)?ans:-ans;
        
    }
};