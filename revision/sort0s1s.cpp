#include <bits/stdc++.h>
using namespace std;

void sort0s(int *arr,int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if (arr[i]!=0 && arr[j]!=1 ){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if (arr[i]==0 && arr[j]!=1 ){
            i++;
        }
        if (arr[i]!=0 && arr[j]==1 ){
            j--;
        }
        if(arr[i]==0 && arr[j]==1){
            i++;
            j--;
        }

    }
}

int main()
{
    int n,arr[10];

    cout<<"enter size of array 1"<<endl;
    cin >> n;
    cout <<"enter elements"<<endl;
        for (int i = 0; i < n; i++)
        {
        cin>>arr[i];
        }
    sort0s(arr,n);
    for (int i = 0; i < n; i++)
        {
        cout<<arr[i]<<" ";
        }
    }