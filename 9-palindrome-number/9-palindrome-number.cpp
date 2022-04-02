class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else
        {
           string s = to_string(x);
            int n = s.size();
            for(int i=0; i<(n/2)+1; i++)
            {
                if(s[i]!=s[n-1-i])
                    return false;
            }
            return true;
        }
    }
};