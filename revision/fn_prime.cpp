#include<iostream>
using namespace std;
 
bool prime(int n){
    for(int d=2;d<n;d++){
        if (n%d==0){
            return false;
        }
    }
    return true;
} 

int main(){

    int n;
    cin>>n;
    bool ans=prime(n);

    if (ans==true){
        cout<<"the number is prime";
    }
    else{
        cout<<"the number is not prime";
    }
}