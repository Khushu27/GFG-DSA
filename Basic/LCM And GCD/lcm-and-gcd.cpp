//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
   private:
    long long gcdEuclid(long long a, long long b) {
      if (b == 0) return a;
      return gcdEuclid(b, a%b);
    }
    
    long long lcm(long long a, long long b, long long gcd) {
      return (a*b)/gcd;
    }
  
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
      vector<long long> result(2);
      result[1] = gcdEuclid(A, B);
      result[0] = lcm(A, B, result[1]);
      return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends