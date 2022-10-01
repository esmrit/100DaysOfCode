//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	    int i=a.size()-1;
	    int j=b.size()-1;
	    
	    int carry=0;
	    vector<int> v;
	    while(i>=0 || j>=0){
	        
	        int sum=0;
	       
	        if (i>=0){
	            sum=sum+a[i];
	            i--;
	        }
	        if (j>=0){
	            sum=sum+b[j];
	            j--;
	        }
	        sum=sum+carry;
	        carry=sum/10;
	        v.push_back(sum%10);
	    }
	        
	        if (carry>0){
	            v.push_back(carry);
	        }
	        reverse(v.begin(),v.end());
	        return v;
	    }
	

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
