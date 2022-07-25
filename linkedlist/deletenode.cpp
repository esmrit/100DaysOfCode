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

void deleteNode(node* head, int i)
{
 
    if (head == NULL)
        return;
    node* temp = head;
 
    if (i == 0) {
        head = temp->next;
        free(temp);
        return;
    }
 
    int count=0;
   while(temp != NULL && count < i - 1){
    temp = temp->next;
    count++;
   }
    if (temp == NULL || temp->next == NULL)
        return;
    node* next = temp->next->next;
 
    free(temp->next); 
    temp->next = next;
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

    deleteNode(head,i);

    print(head);
}