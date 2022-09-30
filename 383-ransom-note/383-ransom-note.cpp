class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
    int cnt[26] = {0};
        
        for(char ch : magazine)
        {
            cnt[ch - 'a']++;
        }
        
        for(char ch : ransomNote)
        {
            if(cnt[ch - 'a']-- < 1)
                return false;
        }
     return true;
    }
};