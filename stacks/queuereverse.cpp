//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool checkBalanced(string s) {
	// Write your code here
    stack <char> c;
    
    for(int i=0;s[i]!='\0';i++){
        
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            c.push(s[i]);
        
        if(s[i]=='}'){
            if(!c.empty() && c.top()=='{')
                c.pop();
            else
                return false;
        }
        if(s[i]==']'){
            if(!c.empty() && c.top()=='[')
                c.pop();
            else
                return false;
        }
        if(s[i]==')'){
            if(!c.empty() && c.top()=='(')
                c.pop();
            else
                return false;
        }
    }
    if(!c.empty())
        return false;
    return true;

}

bool valid(string s)
{
    // code here
    return checkBalanced(s);
    
}