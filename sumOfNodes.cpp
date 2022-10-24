#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;



void inOrderPrint(BinaryTreeNode<int>* root){
if (root==NULL){
    return ;
}
inOrderPrint(root->left);
cout <<root->data;
inOrderPrint(root->right);

}

int sumOfNodes(BinaryTreeNode<int>* root){
    if (root==NULL){
        return 0;
    }
    return (root->data +sumOfNodes(root->left)+sumOfNodes(root->right));
    
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

    BinaryTreeNode<int>* root=takeInputLevel();
    int answer=sumOfNodes(root);
    cout<<answer;
}