#include<iostream>
using namespace std ;

void tripletsum(int *arr,int n,int x){

    int count=0;


    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k]== x){
                    count++;
                }
                
            }
            
        }
        
    }
    cout<<"there are "<<count<<"pairs";
}


int main(){
    int t;
    cout <<"input t"<<endl;
    cin>>t;

    while(t--){
        int n;
        cout<<"input n"<<endl;
        cin>>n;

        int *arr=new int[n];
       
       cout<<"input values of first list"<<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
         int x;
        cout<<"input x"<<endl;
        cin>>x;
        tripletsum(arr,n,x);
       
       
       
        delete [] arr;
    }
}