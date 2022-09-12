#include <iostream>
using namespace std;

void merge(int a[],int si ,int mid ,int ei){
    
    int start2 =mid+1;

    if (a[mid]<=a[start2]){
        return;
    }
     
     while (si<=mid && start2<=ei)
     {
        if (a[si]<=a[start2])
        {
            si++;
        }
        else
        {

            int value=a[start2];
            int index= start2;

            if (index!=si){
                a[index]=a[index-1];
                index--;
            }
            a[si]=value;    
            si++;
            mid++;
            start2++;
        }
     }
     

}

void mergesort(int a[],int si,int ei){

    if (si < ei){
        int mid=(si+ei)/2;

    mergesort(a,si,mid);
    mergesort(a,mid+1,ei);

    merge (a,si,mid,ei);
    }
    
    
    
}

int main(){
    int n;
    cin>>n;

    int *a = new int [n];

    cout<<"enter the values in array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    mergesort(a,0,n-1);
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    delete []a;
}