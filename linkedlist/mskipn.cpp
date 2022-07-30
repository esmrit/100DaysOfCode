#include <iostream>
#include <stdlib.h>
#include "node1.cpp"
using namespace std;

node* skipMdeleteN(node  *head, int M, int N) {
    // Write your code here
    
    if(head==NULL)
        return NULL;
    
    node* pt=head;
    for(int i=1;i<M;i++){
        if(pt->next==NULL)
            break;
        pt=pt->next;
    }
    
    for(int i=1;i<=N;i++){
        if(pt->next==NULL)
            break;
        node* t=pt->next;
        pt->next=t->next;
        t->next=NULL;
        delete t;
    }
    
    node* ans=skipMdeleteN(pt->next,M,N);
    return head;
}



node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL,*tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
        if(head==NULL)                  {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* head=takeinput();
    int m,n;
    cin>>m >> n;
    head= skipMdeleteN(head,m,n);
    print(head);
    return 0;
}
