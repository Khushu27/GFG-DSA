//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
        if(N % M == 0){
            return N;
        }
        int low = N - 1;
        int high = N + 1;
        while(1){
            if(low % M == 0 && high % M == 0){
                if(abs(low) >= abs(high)){
                    return low;
                }
                return high;
            }
            else if(low % M == 0){
                return low;
            }
            else if(high % M == 0){
                return high;
            }
            low--;
            high++;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends