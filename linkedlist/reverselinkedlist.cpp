#include <iostream>
#include <stdlib.h>
#include "node1.cpp"
using namespace std;

node* takeinput(){
    int data;
    cin>> data;
    node *head=NULL;
    node *tail=NULL;
    while (data!=-1){
        node *newnode=new node(data);
        if(head == NULL){
            head =newnode;
            tail=newnode;
        }
        else{
                
                tail->next=newnode;
                tail=tail->next;    
            }
    cin>>data;
                    }
    return head;    
    }

node *reverseLL(node *head){
        node* current = head;
        node *prev = NULL; 
        node *next = NULL;
  
        while (current != NULL) {
            
            next = current->next;
           
            current->next = prev;
            
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }


 void print(node *head){

    while (head !=NULL){
        cout << head->data<<" ";
        head= head->next;
    }

}

int main(){
    node *head=takeinput();

    head= reverseLL(head);
    print(head);
    

}