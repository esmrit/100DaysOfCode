#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;

void nodeExist(BinaryTreeNode<int>* root,int k1 ,int k2){
    if(root==NULL){
        return ;
    }

    if (k1<root->data){
        nodeExist(root->left,k1,k2);
    }
     if (k1<=root->data && k2>=root->data){
        cout << root->data<< " ";
    }
    nodeExist(root->right,k1,k2);
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
    int k1;
    cout<<"input k1"<<endl;
    cin>>k1;

    int k2;
    cout<<"input k2"<<endl;
    cin>>k2;

    nodeExist(root,k1,k2);

}