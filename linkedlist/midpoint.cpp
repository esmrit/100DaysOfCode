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

    void midpoint(node * head){
        node *temp=head;
        node *full=temp;
        node *half=temp;

      if (temp!=NULL){
        while(full!=NULL && full->next!=NULL)
    {
         half=half->next;
         full=full->next->next;
    }
    cout<<half->data<<endl;
    cout<<full->data<<endl;
    }
    
    }


void print(node *head){

    while (head !=NULL){
        cout << head->data<<" ";
        head= head->next;
    }

}

int main(){
    node *head=takeinput();
    midpoint(head);

}