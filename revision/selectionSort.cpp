#include <bits/stdc++.h>
using namespace std;


void selectionSort(int *arr,int n){
    for (int i = 0; i < n-1; i++){
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
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

    selectionSort(arr,n);   
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
        
}