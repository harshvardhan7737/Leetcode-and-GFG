class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        map <int, int> mp;
        
        for(int i=0; i<nums1.size(); i++)
        {
            mp[nums1[i]]++;
        }
        
        for(auto it: nums2)
        {
            if(mp[it]>0)
            {
                ans.push_back(it);
                mp[it]--;
            }
        }
        
        return ans;
        
    }
};