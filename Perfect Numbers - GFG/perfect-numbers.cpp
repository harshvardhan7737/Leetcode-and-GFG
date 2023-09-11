//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        long long sum = 0;
        for(int i=1; i<=sqrt(N); i++)
        {
            if(N%i == 0)
            {
                if(N/i == i)
                sum += i;
                else
                sum += i + N/i;
            }
        }
        if(sum-N == N)
        return 1;
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends