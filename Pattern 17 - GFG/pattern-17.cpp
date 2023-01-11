//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=0;i<n;i++){
            for(int j=1;j<n-i;j++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<char(j+65);
            }
            for(int j=i;j>0;j--){
                cout<<char(j+64);
            }
            cout<<"\n";
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends