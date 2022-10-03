#include <iostream>
using namespace std;

int find(int *a,int n,int x){

    int rec;

    if (n>=0){
        if (a[n-1]==x){
            return n-1;
        }
        else {
            rec=find(a,n-1,x); 
        }
    }
    else{
        return -1;
    }
    return rec;
}

int main(){

     int n,x;
     cout <<"enter the value of n"<<endl;
     cin>>n;

     int *a=new int [n];
    cout <<"enter the valus in array"<<endl;

     for (int i = 0; i < n; i++)
     {
         cin>>a[i];
     }

    cout <<"enter the value of x"<<endl;
     cin>>x;
    int answer= find(a,n,x);
    if(answer!=-1){
    cout << x <<"is present at index"<<answer;    
    }
    else{
        cout <<"x is not present";
    }

     delete []a;
     
 }