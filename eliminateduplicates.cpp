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

    int countNodes(node* head)
{
    if (head == NULL)
        return 0;
 
    return (1 + countNodes(head->next));
}

node *duplicate(node *head ){

    node *current=head;
    node *temp;

    if (current==NULL){
        return head;    
    }
    while(current->next!=NULL){
        if (current->data==current->next->data){
            temp=current->next->next;

            current->next=temp;
        }
        else{
            current=current->next;
        }
    }
return head;
    }
 // node *temp=head;
        // int count = countNodes(head);
        //     node *prev=NULL;
        //     node *curr=head;

        //     int i=0;
        // while (i<count){
        //     prev=curr;
        //     curr=curr->next;
        //     if (prev->data==curr->data){
        //         curr->next=curr->next->next;
        //     }
        //     i++;
        // }
        // return head;

    void print(node *head){

    while (head !=NULL){
        cout << head->data<<" ";
        head= head->next;
    }

}

int main(){
    node *head=takeinput();

    head=duplicate(head);
    print (head);

}