class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> ans;
        
        int n = digits.size();
        long long int a = digits[0];
        for(int i=n-1; i>=0; i--)
        {
         
            if(digits[i]==9)
            {
                digits[i]=0;   
                
                if(i==0)
                {
                    digits.insert(digits.begin(),0);
                    ++i;
                }
                continue;
            }
                else
                {
                    digits[i] += 1;
                    break;   
                }            
        } 
        return digits;
    }
};