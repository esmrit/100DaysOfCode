#include <bits/stdc++.h>
using namespace std;

int secondLargest(int *arr, int n){

int largest=INT_MIN;
int largest2=INT_MIN;

for (int i = 0; i < n; i++)
{
   if (arr[i]>largest)
   {
    largest2=largest;
    largest=arr[i];
   }
   if (arr[i] > largest2 && arr[i] < largest)
        {
            largest2 = arr[i];
        }
}

return largest2;


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

int ans=secondLargest(arr,n);
cout<<ans<<endl;


}