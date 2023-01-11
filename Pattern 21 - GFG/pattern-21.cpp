//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        for(int i=1;i<=n;i++){
            if(i == 1 || i==n){
                for(int j=1;j<=n;j++){
                    cout<<"*";
                }
            }
            else{
                cout<<"*";
                for(int l=0;l<n-2;l++){
                    cout<<" ";
                }
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends