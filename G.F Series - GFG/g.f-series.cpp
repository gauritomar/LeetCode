//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void gfSeries(int N)
    {
        long long arr[N];
        arr[0] = 0;
        arr[1] = 1;
        
        for(int i = 2; i< N; i++){
            arr[i] = arr[i-2]*arr[i-2] - arr[i-1];
        }
        
        for(int i = 0; i<N; i++){
            cout << arr[i] << " ";
    }
    cout<< endl;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends