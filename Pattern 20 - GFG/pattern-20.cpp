//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        
        for(int i=1;i<=n-1;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int l=0;l<(2*(n-i));l++){
                cout<<" ";
            }
            for(int k=i;k>0;k--){
                cout<<"*";
            }
            cout<<"\n";
        }
        for(int i=n;i>0;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int l=0;l<(2*(n-i));l++){
                cout<<" ";
            }
            for(int k=i;k>0;k--){
                cout<<"*";
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