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

//code for midpoint of lined list;
node *midpoint (node*head){
    node *temp=head;
    node *fast=temp->next;
    node *slow =temp;
     if (head !=NULL){
        while (fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
     }

}

//code for reversing the linked list

node * reverseLL(node * head){
    node *current=head;
    node *next=NULL;
    node *last=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=last;
        last=current;
        current=next;
    }
    head=last;
    return head;
}

//for palindrome
bool palindrome(node * head){
    if (head->next==NULL){
        return true;
    }
    node *temp=head;
    node *midhead=midpoint(temp);
    node *midfirst;

    // while (temp!=NULL && temp->next==midhead){
    //     lastele=temp;
    //     temp=temp->next;
    // }

    midfirst=midhead->next;
    midhead->next=NULL;

    midfirst=reverseLL(midfirst);

    while(temp!=NULL && midfirst!=NULL){
        if(temp->data==midfirst->data){
            return true;
        }
        else
        return false;
    }
}
//printing linked list
void print(node *head){

    while (head !=NULL){
        cout << head->data<<" ";
        head= head->next;
    }

}

int main(){
    node *head=takeinput();

    bool ans=palindrome(head);
cout<<ans;

    // node *mid=midpoint(head);

    // cout<<mid->data;

    // head=reverseLL(head);
    // print (head);

}