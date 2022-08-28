#include <bits/stdc++.h>
using namespace std;

int countNumber(int a){
    if (a==0){
        return 0;
    }

    
    return 1+countNumber(a/10);

}

int main()
{
    int a;
    cin>>a;

    int ans=countNumber(a);
    cout<<ans;
}
