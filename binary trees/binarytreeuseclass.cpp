#include <bits/stdc++.h>
#include "binaryTreeNode.h"
using namespace std;

void printTree(BinaryTreeNode<int>* root){
    if (root==NULL){
        return;
    }
    cout<<root->data<<":";
    if (root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if (root->right!=NULL){
        cout<<"L"<<root->right->data;
    }
     cout<<endl;
    printTree(root->left);
   
    printTree(root->right);

    
}

BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"enter root data"<<endl;
    cin >>rootData;
    if (rootData==-1){
        return NULL;
    }

    BinaryTreeNode<int>* root= new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* rightChild=takeInput();
    BinaryTreeNode<int>* leftChild=takeInput();
    root->left=leftChild;
    root->right=rightChild;
    return root;
    

}

int main(){
    // BinaryTreeNode<int>* root=new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>* node1=new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>* node2=new BinaryTreeNode<int>(3);
BinaryTreeNode<int>* root=takeInput();
    // root->left=node1;
    // root->right=node2;
    
    printTree(root);
}