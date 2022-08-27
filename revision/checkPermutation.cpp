#include <bits/stdc++.h>
using namespace std;

bool samePer(string s1,string s2){
    if(s1.size()!=s2.size()){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]!=s2[i]){
            return false;
        } 
    }
    return true;
    
}
int main(){
    string s1;
    string s2;

    cin>>s1;
    cout<<endl;
    cin>>s2;


    bool ans=samePer(s1,s2);
    cout <<ans;
}