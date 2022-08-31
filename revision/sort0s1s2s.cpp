#include <bits/stdc++.h>
using namespace std;

void sort0s(int *nums,int n){
int lo=0;
int hi=n-1;
int mid=0;
while(mid<=hi){
    switch(nums[mid]){

    case 0:
        swap(nums[lo],nums[mid]);
        lo++;
        mid++;
        break;
    
    case 1:
        mid ++;
        break;
        
    case 2:
        swap(nums[mid],nums[hi]);
        hi--;
        break;

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