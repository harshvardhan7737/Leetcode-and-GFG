//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    int i=0, j=0;
    unordered_map<char, int>m;
    int mx = 0;
    
    while(j < S.size())
    {
        m[S[j]]++;
        
        if(m.size() == j-i+1)
        {
            mx = max(mx, j-i+1);
        }
        
        if(m.size() < j-i+1)
        {
            while(m.size() < j-i+1)
            {
                m[S[i]]--;
                if(m[S[i]] == 0)
                m.erase(S[i]);
                i++;
            }
        }
        j++;
    }
    return mx;
}