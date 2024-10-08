//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int max_index = 0;
        int count = 1;
        
        for(int i=0; i<size; i++)
        {
            if(a[max_index] != a[i])
            count--;
            
            else
            count++;
            
            if(count == 0)
            {
            max_index = i;
            count = 1;
            }
            
        }
        
        int num = a[max_index];
        int c = 0;
        for(int i=0; i<size; i++)
        {
            if(a[i] == num)
            c++;
        }
        
        if(c > size/2)
        return num;
        else
        return -1;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends