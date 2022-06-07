class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool> IsPrime(n+1,true);
        int count=0;
        IsPrime[0] = IsPrime[1] = false;

        
        for(int i=2; i*i<n; i++)
        {
            
            for(int j = i*i; j<n; j=j+i)
            {
                IsPrime[j] = false;
            }
        }
        
        for(int i=2; i<n; i++)
        {
            if(IsPrime[i])
            count++;   
        }          
        
        return count;
    }
};