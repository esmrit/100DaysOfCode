#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr,int n,int x){
    int low=0;
    int high=n-1;
    
    while(low<=high){
         int mid=(low+(high-low))/2;
        if (arr[mid]==x){
            return mid;
        }
        else if (arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
    
    
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
    int x;
    cout<<"input x"<<endl;
    cin>>x;
    int ans=binarySearch(arr,n,x);
    cout<<ans;
        
}