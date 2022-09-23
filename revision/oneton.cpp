#include <iostream>
using namespace std; 

void factorial(int n){
    if (n==1){
        cout << n<<endl;
        return;
    }
    factorial(n-1);
    cout <<n<<endl;
    return;
    
}

int main(){
    int n;
    cout<<"input n"<<endl;
    cin>>n;
    factorial(n);
    
}