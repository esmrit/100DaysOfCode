#include<iostream>
using namespace std;

int sumofarr(int a[],int n){

if (n==0){
    return 0;

}

int smalloutput=sumofarr(a+1,n-1);

return a[0]+smalloutput;
}

int main(){
int n;
cin>>n;

int *a=new int [n];
for (int  i = 0; i < n; i++)
{
    cin>>a[i];
}

int answer=sumofarr(a,n);
cout <<answer<<endl;

}