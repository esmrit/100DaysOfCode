#include <bits/stdc++.h>
using namespace std;


void insertionSort(int *arr,int n){
    for (int  i = 1; i < n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while (j >= 0 && arr[j] > temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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

  insertionSort(arr,n);   
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
        
}