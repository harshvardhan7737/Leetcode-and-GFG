//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        if(n==1) return 1;
        
        int low = 0, high = n-1;
        long long sum1 = 0, sum2 = 0;
            sum1 += a[low];
            sum2 += a[high];  
          //  cout << sum1 << " " << sum2 << endl;

        while(low < high)
        {
            // cout << sum1 << " " << sum2 << endl;

            if(sum1 > sum2)
            {
                high--;
                sum2 += a[high];
            }
            else if(sum2 > sum1)
            {
                low++;
                sum1 += a[low];
            }
            else
            {
                low++;
                high--;
                sum1 += a[low];
                sum2 += a[high];
            }
        }
        if(sum1 == sum2) return low+1;
        else return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends