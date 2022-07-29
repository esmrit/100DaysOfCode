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

    int indexat(node *head,int x){
        node *temp=head;
        int smallans;

        if (temp==NULL){
            return -1;
        }
        if (temp->data==x){
            return 0;
        }
        if (temp->data!=x){
                smallans=indexat(temp->next,x);

                if(smallans!=-1){
                    return smallans+1;
                }
                else{
                    return -1;
                }

        }



        return  indexat(temp->next,x);
    
    }


void print(node *head){

    while (head !=NULL){
        cout << head->data<<" ";
        head= head->next;
    }

}

int main(){
    node *head1=takeinput();
    int x;
    cin >> x;
    int ans =indexat(head1,x);
    cout<<ans;
    }