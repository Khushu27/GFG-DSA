//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code herey
    int i = 0;
    int ans = 0;
    while(n != 0){
        int ls = n % 10;
        if(ls == 0){
            ls += 5;
        }
        ans = (ls * pow(10, i)) + ans;
        n /= 10;
        i++;
    }
    return ans;
}