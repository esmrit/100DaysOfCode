#include <iostream>
#include "pair.cpp"
using namespace std;



int main(){
     Pair<int> p1;
     Pair<double> p2;

    p1.setX(10);
    p2.setX(10.23);

    cout <<p1.getX()<<endl<<p2.getX();

}