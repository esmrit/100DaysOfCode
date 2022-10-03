#include <iostream>
#include <math.h>
using namespace std;


double geometricSum(int k) {
    // Write your code here
    if(k==0)
        return 1;
    else{
    double sump= (1/(pow(2,k)));
    return geometricSum(k-1)+sump;
    }
}
int main() {
    int k;
    cin >> k;
    cout << geometricSum(k) << endl;   
}