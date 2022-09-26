#include <iostream>
using namespace std; 

int factorial(int x,int n){

    if (n==0){
        return 1;
    }

    int smalloutput = factorial(x,n-1);
    int answer=x*smalloutput;

    return answer;
}

int main(){
    int n,x;
    cout<<"input x"<<endl;
    cin>>x;
    cout<<"input n"<<endl;
    cin>>n;
    int output =factorial(x,n);
    cout<<output;
}