//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int firstOcc(int arr[], int n, int x)
    {
        int first = -1;
        int low = 0;
        int high = n-1;
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            if(arr[mid] == x)
            {
                first = mid;
                high = mid-1;
            }
            else if(arr[mid] > x)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return first;
    }
    
    int lastOcc(int arr[], int n, int x)
    {
        int last = -1;
        int low = 0;
        int high = n-1;
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            if(arr[mid] == x)
            {
                last = mid;
                low = mid+1;
            }
            else if(arr[mid] > x)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return last;
    }
    
    vector<int> find(int arr[], int n , int x )
    {
        int first = firstOcc(arr, n, x);
        if(first == -1) return {-1,-1};
        int last = lastOcc(arr, n, x);
        
        return {first, last};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends