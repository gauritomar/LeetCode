//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
private:
    int sum(vector<int> vec){
        int summ = 0;
        for(int i = 0; i < vec.size(); i++){
            summ += vec[i];
        }
        return summ;
    }
    void f(vector<int> arr, int index, vector<int> output, vector<int> &ans){
        if(index >= arr.size()){
            ans.push_back(sum(output));
            return;
        }
        //ignore
        f(arr, index+1, output, ans);
        
        //chose
        output.push_back(arr[index]);
        f(arr, index+1, output, ans);
        output.pop_back();
    }
public:

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> output;
        vector<int> ans;
        
        f(arr, 0, output, ans);
        sort(ans.begin(), ans.end());
        return ans;
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
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends