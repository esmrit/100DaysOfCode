#include<iostream>
using namespace std;
#include <string>

int subs(int input, string output[]){
    if (input==0||input==1){
        output[0]="";
        return 1;
    }
  int smallnumber=input/10;
  int ren=input%10;
  int smalloutput=subs(smallnumber,output);

  int value;

    string valuefor[]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    if (ren==7||ren==9){
        value=4;
    }
    else{
        value=3;
    }

    int j=0;
    int k=0;
    string  temp[1000];
    
    while ( j < value)
    {
       for (int i = 0; i < smalloutput; i++)
       {
             temp[k]=output[i] +valuefor[ren-2][j];
            k++;
       }
       j++;
    }

    for (int i = 0; i < k; i++)
    {
        output[i]=temp[i];
    }

    return value*smalloutput;
}


int main(){

 int input;
 cin>>input;
 string*  output =new string[1000]; 

 int count =subs(input,output);
 for (int i = 0; i < count; i++)
 {
     cout<<output[i]<<endl;
 }
 
}