#include <iostream>
using namespace std;
#include <stdlib.h>
#include "node1.cpp"
int getCount(node* head)
{
    
    if (head == NULL) {
        return 0;
    }
    
    else {
        return 1 + getCount(head->next);
    }
}

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



void print(node *head){

    while (head !=NULL){
        cout << head->data<<" ";
        head= head->next;
    }

}

int main(){
    node *head=takeinput();
    cout<<getCount(head);
}