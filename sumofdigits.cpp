#include<iostream>
using namespace std;

int sumofdigits(int n){

    if (n==0){
        return 0;
    }
    int rem=n%10;
    return rem+ sumofdigits(n/10);

}

int main(){

    int n;
    cin>>n;
    cout <<sumofdigits(n)<<endl;
}