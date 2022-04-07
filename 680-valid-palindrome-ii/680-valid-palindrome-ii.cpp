class Solution {
public:
    
    bool validPalindrome(string s) {
        
        int l = 0;
        int r = s.size()-1;
        int count=0;
        while(l<r)
        {
           if(s[l]==s[r]) 
           {
               l++;
               r--;
           }  
        
            else
            {
                 return isPalin(s,l+1,r) || isPalin(s,l,r-1);
            }
        }
    return true; 
}
    bool isPalin(string s,int i, int j)
    {
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            
            else
            {
                return false;
            }
        }
        return true;
    }
};