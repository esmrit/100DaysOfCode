#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int maximumfreq(int *a, int n){
    int max = 0; 
    unordered_map<int,int> feq; 
        for (int i = 0; i < 11; i++){
                feq[a[i]]++;

                if (feq[a[i]] > max){
                     max = feq[a[i]];
                }      
            }

    int element=0;
    for (int i = 0; i < n; i++){
        if (feq[a[i]] == max){
            element = a[i];
            break;
        }
    }
    return element;
}

int main(){
    int a[]={1,2,3,3,2,1,4,3,6,5,5,5};
    int output =maximumfreq(a,12);
    cout<<output;
}
