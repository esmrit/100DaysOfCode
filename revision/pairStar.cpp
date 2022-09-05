#include<bits/stdc++.h>
using namespace std ;

string pairStar(string s){
    if (s.size()==0 ){
        return "";
    }
    
    if (s[0] == s[1]) {
        string smallOutput = pairStar(s.substr(1));
        return "*" + smallOutput;
    }
    
    return s[0]+pairStar(s.substr(1));
}
int main(){
   string s;
   cin>>s;    
    cout <<pairStar(s)<<endl;
}