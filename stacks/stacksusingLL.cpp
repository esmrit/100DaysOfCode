#include <iostream>
using namespace std;


template<typename T>
class node{
    public:
        T data;
        node <T> *next;

        node (T data){
            this->data=data;
            next=NULL;
        }
};

template<typename T>
class Stack{
    node<T> *head;
    int size;

    public:
    Stack(){
        head=NULL;
        size=0;
    }

    int getsize(){
        return size;
    }
    
    bool isEmpty(){
        return size==0;
    }

    void push(T element){
        node<T> *newnode=new node<T>(element);
        newnode->next=head;
        head=newnode;
        size++;
    }

    T pop(){
        if (isEmpty()){
            return 0;
        }
        T ans=head->data;
        node<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }

    T top(){
        if (isEmpty()){
            return 0;
        }
        return head->data;
    }
};
