#include <iostream>
#include "pair.cpp"
using namespace std;



int main(){
     Pair<Pair<int,double>,double> p1;
     Pair<double,int> p2;

    
    p2.setX(10.23);
    Pair <int ,double> p3;
    p3.setX(10);
    p3.setY(11.11);
    p1.setX(p3);

    cout <<p1.getX().getY()<<endl<<p2.getX();

}