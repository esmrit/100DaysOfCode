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

int findelement(node * head, int k){
    node *temp=head;
    int ans =-1;
    
   for (int  i = 0;temp!=NULL; i++)
   {
        if (temp->data==k){
            ans=i;
            return ans;
        }
        else{
            temp= temp->next;
        }
   }
   return -1;
   
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

 int k=findelement(head, i);

    cout<<k<<endl;

}