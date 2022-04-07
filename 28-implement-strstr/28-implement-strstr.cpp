class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int j=0, p=0;
        
        for(int i=0; i<haystack.size(); i++)
        {
            if(haystack[i]==needle[j])
            {
                 ++j;
                
                if(needle.size()==j)
                {
                     return i + 1 - needle.size();
                } 
            }  
            else
                {
                    i = i-j;
                    j=0;
                }
        }
    return -1;
    }
};