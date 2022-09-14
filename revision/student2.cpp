#include <iostream>
using namespace std ;
#include<cstring>
#include "student.cpp"




int main(){
    char name []="abcd";
    student s1(20,name);
    s1.display();
    student s2(s1);
    s2.name[0]='K';
    s2.display();
    s1.display();


}
