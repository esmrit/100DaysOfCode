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

node *merge(node *head1,node* head2){

    node *temp1=head1;
    node *temp2=head2;

    node *fhead=NULL;
    node *ftail=NULL;

    if (temp1->data <= temp2->data){
        fhead=temp1;
        ftail=temp1;
        temp1=temp1->next;
    } 
    else{
        fhead=temp2;
        ftail=temp2;
        temp2=temp2->next;
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data<=temp2->data){
            ftail->next=temp1;
            temp1=temp1->next;
            ftail=ftail->next;
        }
        else{
            ftail->next=temp2;
            temp2=temp2->next;
            ftail=ftail->next;
        }
    }

    while(temp1!=NULL){
            ftail->next=temp1;
            temp1=temp1->next;
            ftail=ftail->next;
    }

    while (temp2!=NULL)
    {
            ftail->next=temp2;
            temp2=temp2->next;
            ftail=ftail->next;
    }
    
    return fhead;

}

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

node *mergesort(node *head){
    node *temp=head;
    if (temp==NULL){
        return NULL;
    }
    if (temp->next==NULL){
        return temp;
    }

    node *mid1=midpoint(temp);
    node *mid2=mid1->next;
    mid1->next=NULL;

    node *list1=mergesort(temp);
    node *list2=mergesort(mid2);

    node *answer=merge(list1,list2);
    return answer;
}


void print(node *head){

    while (head !=NULL){
        cout << head->data<<" ";
        head= head->next;
    }

}

int main(){
    node *head1=takeinput();


    node *ans=mergesort(head1);

    print(ans);
    
    }