//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
    private:
    int solve(int n, int x, int y, int z){
    vector<int>dp(n+1, INT_MIN);
    dp[0]=0;
    
    for(int i = 1; i<=n; i++){
        if(i>=x){
            dp[i]=max(dp[i-x]+1, dp[i]);
        }
        if(i>=y){
            dp[i]=max(dp[i-y]+1, dp[i]);
        }
        if(i>=z){
            dp[i]=max(dp[i-z]+1, dp[i]);
        }
       
    }
    if(dp[n]<0){
        return 0;
    }
    else return dp[n];
}

    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        
        return solve(n, x, y, z);
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends