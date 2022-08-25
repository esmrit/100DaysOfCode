#include <bits/stdc++.h>
using namespace std;


   void intersection(int *input1, int *input2, int size1, int size2){

    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            if (input1[i] == input2[j]){
                input2[j] = 0;
                cout << input1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

int main()
{
    int n,m, arr1[10],arr2[10];

    cout<<"enter size of array 1"<<endl;
    cin >> n;
    cout <<"enter elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
   
 cout<<"enter size of array 2"<<endl;
    cin >> m;
    cout <<"enter elements"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }

    intersection(arr1,arr2,n,m);

    return 0;
}