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

   node* insert(node *head,int i,int data){
        
        if (head ==NULL){
            return NULL;

        }

        if (i==0){
            node* newnode=new node(data);
            newnode->next=head;
            return newnode;
            }


         if (i==1){
        node *newnode= new node(data);
        newnode->next=head->next;
        head->next=newnode;
        return head;
         }

   node *currentnode=insert(head->next,i-1,data);

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
    int i,data;

    cin>>i >>data;

    head= insert(head,i,data);

    print(head);
}