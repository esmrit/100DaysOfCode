


//Reverse list of size k
#include <bits/stdc++.h>
using namespace std;


//Implement kReverse(int k) i.e. you reverse first k elements then reverse next k elements and so on

class Node{
public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};



void printlist(Node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* revelist(Node *head){
    
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
        return head;
    
    Node *prev=head;
    Node *cur=head->next;
    prev->next=NULL;
    while(cur){
        Node *temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    
    return prev;
    
}


Node* kReverse(Node*head,int n)
{
    //write your code here
    if(head==NULL)
        return NULL;
    
    
    Node* front=head;
    Node* tail=head;
    Node* newHead;
    
    for(int i=1;i<n;i++){
        if(tail->next==NULL)
            break;
        else
            tail=tail->next;
    }
    Node *newtail=front;
    Node *temp=tail->next;
    tail->next=NULL;
    newHead=revelist(front);
    
    Node* ans=kReverse(temp,n);
    newtail->next=ans;
    return newHead;
      
}



Node* takeinput(){
    int data;
    cin>>data;
    Node* head=NULL,*tail=NULL;
    while(data!=-1){
        Node *newnode=new Node(data);
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
void print(Node *head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=takeinput();
    int n;
    cin>>n;
    head=kReverse(head,n);
    print(head);
    return 0;
}