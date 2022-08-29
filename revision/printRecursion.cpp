#include <bits/stdc++.h>
using namespace std;

void printNum(int a){
    if (a==0){
        return ;
    }
    
    printNum(a-1);
    cout<<a<<" ";
   
    return;

}

int main()
{
    int a;
    cin>>a;

    printNum(a);
}