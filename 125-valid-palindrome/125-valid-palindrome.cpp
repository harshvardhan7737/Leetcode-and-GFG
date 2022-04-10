class Solution {
public:
    bool isPalindrome(string s) {
        
        string ans;
        
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z'))
            {
                ans.push_back(s[i]);  
            }
            
            else if((s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9'))
                ans.push_back(tolower(s[i]));
        }
        
        int l=0;
        int r=ans.size()-1;
        
        while(l<=r)
        {
            if(ans[l]!=ans[r]) 
            {
                return false;
            }
                l++;
                r--;
        }
        return true;
        
    }
};