#include <iostream>
using namespace std;

int main(){

    int n ;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        int k=1;
        
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;

    }
}