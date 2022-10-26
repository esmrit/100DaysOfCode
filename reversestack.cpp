#include <bits/stdc++.h>
using namespace std;

stack <int> s1;

void insertAtBottom(int element){
    if (s1.empty()){
        s1.push(element);
        return;
    }

    int topelement= s1.top();
    s1.pop();
    insertAtBottom(element);
    s1.push(topelement);

}

void reverse(){
    if (s1.empty()){
        return;
    }
    int element = s1.top();
    s1.pop();
    reverse();
    insertAtBottom(element);
}


void print(stack<int> s)
{
    if (s.empty())
        return;
    int x = s.top(); 
    s.pop();
    print(s);
    cout << x << " "; 
    s.push(x);
}

int main()
{
      
   
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
      
    cout<<"Original Stack"<<endl;
      
    print (s1);

    cout<<"REVERSED Stack"<<endl;
    
    reverse();

    print (s1);
}