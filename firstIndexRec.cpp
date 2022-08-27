#include <bits/stdc++.h>
using namespace std;

int findNumber(int *a,int n,int x){

    if (n==0){
        return -1;
    }
        
    int ans=findNumber(a,n-1,x);
    
  if (a[n-1]==x){
        return n-1;
        }
    return ans;


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

   int ans=findNumber(a,n,x);
    cout<<ans;

}
