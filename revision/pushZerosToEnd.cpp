#include <bits/stdc++.h>
using namespace std;

void pushZeros(int *arr,int n){

  
    int j=0;

  for (int  i = 0; i < n; i++)
  {
     if (arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
  }
  
}

int main()
{
    int n,arr[10];

    cout<<"enter size of array "<<endl;
    cin >> n;
    cout <<"enter elements"<<endl;
        for (int i = 0; i < n; i++)
        {
        cin>>arr[i];
        }

    pushZeros(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}