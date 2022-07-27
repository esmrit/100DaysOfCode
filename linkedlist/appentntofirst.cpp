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

node *append(node *head ,int k){

        node *temp=head;
        int count= countNodes(head);

        if (count !=k && k<count ){
            int skipnodes=count - k;
            node *previousnode=NULL;
            node *currentnode=head;

            while(skipnodes > 0){
                previousnode=currentnode;
                currentnode=currentnode->next;
                skipnodes--;
            }

            previousnode->next=NULL;
            node *newhead=head;
            head =currentnode;

            while(currentnode->next !=NULL){
                currentnode=currentnode->next;
            }

            currentnode->next=newhead;
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
    int i;

    cin>>i;
    head=append(head,i);
    print (head);

}