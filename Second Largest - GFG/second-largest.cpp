//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
// 	   int a=INT_MIN;
// 	   int b=INT_MIN;
// 	  // if(arr[i]==arr[0]) return -1;
	   
// 	   for(int i=0;i<n;i++){
// 	    //  if(arr[i]==arr[0]) return -1;
	   
// 	       a=max(a,arr[i]);
// 	   }
// 	   for(int i=0;i<n;i++)
// 	   {
// 	       if(arr[i]!=a)
// 	       {
// 	           b=max(b,arr[i]);
// 	       }
// 	   }
// 	   return b;
	   int largest=arr[0];
	   int second=-1;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]> largest)
	       {
	           second=largest;
	           largest=arr[i];
	       }
	       else if(arr[i]>second && arr[i]!=largest){
	           second=arr[i];
	       }
	       
	   }
	   return second;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends