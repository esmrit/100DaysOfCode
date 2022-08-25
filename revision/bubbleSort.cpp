#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int *arr,int n){
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j <n; j++)
        {
            if (arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
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

  bubbleSort(arr,n);   
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
        
}