class Solution {
public:
    int addDigits(int num) {
        
        int ans = num%9;
         
        if(ans == 0 && num!=0)
            return 9;
        else
            return ans;
        
    }
};