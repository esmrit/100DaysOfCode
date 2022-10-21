#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;



pair<int,int> diameterTree(BinaryTreeNode<int>* root){
    if (root==NULL){
        pair<int,int> p;
        p.first=0;
        p.second=0;
        return p;
    }

    pair<int,int> leftChild=diameterTree(root->left);
    pair<int,int> rightChild=diameterTree(root->right);

    int lh=leftChild.first;
    int ld=leftChild.second;
    int rh=rightChild.first;
    int rd=rightChild.second;

    int height=1+max(lh,rh);
    int diameter=max(lh+rh,max(ld,rd));

    pair<int,int> p;
    p.first=height;
    p.second=diameter;
    return p;
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

pair<int,int > answer=diameterTree(root);

cout<<answer.first<<" "<<answer.second;
    
}