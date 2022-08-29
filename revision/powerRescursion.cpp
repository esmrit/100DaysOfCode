#include <bits/stdc++.h>
using namespace std;

int powerofNum(int a,int b){
    if (b==0){
        return 1;
    }

    int ans=powerofNum(a,b-1);
    ans=ans*a;    
    return ans;
}

int main()
{
    int a,b;
    cin>>a;
    cin>>b;

    int ans=powerofNum(a,b);
        cout<<ans;
}