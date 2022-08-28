#include <bits/stdc++.h>
using namespace std;

int pairSum(int *input,int size,int x){

    int count = 0;
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++){
            if (input[i] + input[j] == x)
                count ++;
        }
    }
    return count;


}

int main()
{
    int n,x, arr[10];

    cout<<"enter size of array 1"<<endl;
    cin >> n;
    cout <<"enter elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter x"<<endl;
    cin >> x;
    int ans=pairSum(arr,n,x);
    cout<<ans;
    }