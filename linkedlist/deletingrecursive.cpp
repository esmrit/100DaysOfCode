#include <iostream>
using namespace std;
#include <stdlib.h>
#include "node1.cpp"

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

   node* deletenode(node *head,int i){
        
        if (head->next==NULL){
            return NULL;

        }

        if (i==0){
            node *newnode=head->next;
            head->next=NULL;
            delete head;
            return newnode;
    }
    if (i==1){
        node *newnode= head->next;
        head->next=newnode->next;
        // newnode->next=NULL;
        delete newnode;
        return head;
   }
   node *currentnode=deletenode(head->next,i-1);

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
    int i;

    cin>>i;

 head = deletenode(head,i);

    print(head);
}