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

node *evenafterodd(node *head){

    node* temp = head;
    node* newHead = new node(-1);
    node* temp2 = newHead;
   
    
    while(temp!=NULL){
        if(temp->data % 2 == 0){
            temp2->next = new node(temp->data);
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    temp = head;
     while(temp!=NULL){
        if(temp->data % 2 == 1){
            temp2->next = new node(temp->data);
            temp2 = temp2->next;
        }
        temp = temp->next;
    }

    return newHead->next;


    // if(head==NULL || head->next ==NULL)
    //     return head ;
    
    // node *temp=head;
    // node *oddhead=NULL;
    // node *oddtail=NULL;
    // node *evenhead=NULL;
    // node *eventail=NULL;

    // while(temp!=NULL){
    //         if (temp->data%2==0){
    //             if (evenhead==NULL){
    //                 evenhead=temp;
    //                 eventail=temp;
                    
    //             }
    //             else{
    //                 eventail->next=temp;
    //                 eventail=eventail->next;
    //             }
    //         }
    //         else{
    //             if (oddhead==NULL){
    //                 oddhead=temp;
    //                 oddtail=temp;
    //             }
    //             else{
    //                 oddtail->next=temp;
    //                 oddtail=oddtail->next;
    //             }
    //         }
    //         temp=temp->next;
    // }
    // oddtail->next=evenhead;
    // return oddhead;


    // if(eventail!=NULL){
    // eventail->next=NULL;
    // }
    // else{
    //     oddtail->next=NULL;
    //     return oddhead;
    // }

    //  if(oddtail!=NULL){
    //     oddtail->next=evenhead;
    //     return oddhead;
    // }
    // else{
    //     return evenhead;
    //        }
}   

void print(node *head){

    while (head !=NULL){
        cout << head->data<<" ";
        head= head->next;
    }

}

int main(){
    node *head=takeinput();

    node *ans=evenafterodd(head);
    print(ans);
    
}