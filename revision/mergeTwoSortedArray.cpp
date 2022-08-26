#include <bits/stdc++.h>
using namespace std;

void mergeTwoSorted(int *arr1,int n,int *arr2,int m,int *arr3,int size){
    int k=0;int i=0;
        int j=0;
    while(k<size){
        
        while (i<n && j<m)
        {
            if (arr1[i]<=arr2[j]){
                arr3[k++]=arr1[i++];
                }
            else{
                arr3[k++]=arr2[j++];
            }
        }
         while(i<n){
            arr3[k++]=arr1[i++];
        }
        while (j<m){
            arr3[k++]=arr2[j++];
        }
        
    }
}

int main()
{
    int n,arr1[10];

    cout<<"enter size of array 1"<<endl;
    cin >> n;
    cout <<"enter elements"<<endl;
        for (int i = 0; i < n; i++)
        {
        cin>>arr1[i];
        }
    int m,arr2[10];

    cout<<"enter size of array 2"<<endl;
    cin >> m;
    cout <<"enter elements"<<endl;
        for (int i = 0; i < m; i++)
        {
        cin>>arr2[i];
        }    

    int size=m+n;
    int arr3[size];

    mergeTwoSorted(arr1,n,arr2,m,arr3,size);   

    for (int i = 0; i < size; i++)
    {
        cout<<arr3[i]<<" ";
    }
        
}