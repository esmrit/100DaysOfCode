#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
    if (root == NULL){
        return NULL;
    }
    Node<int> *leftAns = constructLinkedList(root -> left);
    Node<int> *rightAns = constructLinkedList(root -> right);
    Node<int> *node = new Node<int>(root -> data);

    node -> next = rightAns;
    if (leftAns == NULL){
        return node;
    }

    Node<int> *temp = leftAns;

    while (temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = node;
    return leftAns;

}

void printLinkedList(Node<int>* head){
     while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }

}

BinaryTreeNode<int>* takeInputLevel(){
    
    int rootData;
    cout<<"enter root data"<<endl;
    cin >>rootData;

    if (rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);

    queue <BinaryTreeNode<int>* > pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){

        BinaryTreeNode<int>* front=pendingnodes.front();
        pendingnodes.pop();
        cout<<"enter leftchildof "<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
    if (leftChildData!=-1){
        BinaryTreeNode<int>* child=new BinaryTreeNode<int>(leftChildData);\
        front->left=child;
        pendingnodes.push(child);
        }
       
       cout<<"enter rightchildof "<<front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
    if (rightChildData!=-1){
        BinaryTreeNode<int>* child=new BinaryTreeNode<int>(rightChildData);
        front->right=child;
        pendingnodes.push(child);
        }
    }
    return root;
}

int main(){

    BinaryTreeNode <int >*  root=takeInputLevel();

    Node<int>* head=constructLinkedList(root);
    printLinkedList(head);
}