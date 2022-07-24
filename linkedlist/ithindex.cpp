#include <iostream>
using namespace std;
#include <stdlib.h>
#include "node1.cpp"

int GetNth(node* head, int index)
{
  
    node* temp = head;
    
    int count = 0;
    while (temp != NULL) {
        if (count == index)
            return (temp->data);
        temp = temp->next;
        count++;
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
    int n;
    cin>>n;
    cout << "Element at index " << n << " is " << GetNth(head, n);
}