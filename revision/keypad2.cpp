#include<iostream>
using namespace std;
#include<cstring>

int printsubs(int input ,string output[]){
    if (input==0||input==1){
        output[0]="";
        return 1;
    }
    int smallnumber=input/10;
    int ren=input%10;
    string valuefor[]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    

}

int main(){
    int input;
    cin>>input;
    string *output = new string[1000];

   int count= printsubs(input ,output);

}