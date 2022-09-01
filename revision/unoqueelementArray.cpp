#include <bits/stdc++.h>
using namespace std;

void unique(int *arr,int n){
    sort(arr,arr+n);
    map<int ,int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    int ans;
    for (auto i = m.begin(); i != m.end() ; i++)
    {
        if (i->second==1){
            ans =i->first;
        }
    }
    cout<<ans;
    
}

int main()
{
    int n, arr[100];
    cout<<"enter size of array"<<endl;
    cin >> n;
    cout <<"enter elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    unique(arr,n);
    return 0;
}