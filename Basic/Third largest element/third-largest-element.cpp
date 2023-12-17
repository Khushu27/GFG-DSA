//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         if(n < 3){
             return -1;
         }
         int l1 = 0;
         for(int i = 0; i < n; i++){
             l1 = max(a[i], l1);
         }
         
         int l2 = 0;
         for(int i = 0; i < n; i++){
             if(a[i] != l1){
                 l2 = max(a[i], l2);
             }
         }
         int l3 = 0;
         for(int i = 0; i < n; i++){
             if(a[i] != l1 && a[i] != l2){
                 l3 = max(a[i], l3);
             }
         }
         return l3;
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends