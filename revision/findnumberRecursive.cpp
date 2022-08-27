#include <bits/stdc++.h>
using namespace std;

bool findNumber(int *a,int n,int x){

    if (n==0){
        return false;
    }
        if (a[n-1]==x){
        return true;
        }
    bool ans=findNumber(a,n-1,x);
    
  
    return false;


}

int main()
{
    int n;
    cin>>n;
     
     int *a=new int[n];
     for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        cout<<"inout x"<<endl;
    int x;
    cin>>x;

    bool ans=findNumber(a,n,x);
    cout<<ans;

}
