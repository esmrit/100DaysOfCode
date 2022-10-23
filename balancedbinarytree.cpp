#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;



int hieghtTree(BinaryTreeNode<int>* root){

    if (root==NULL){
        return 0;
    }
    return 1+max(hieghtTree(root->left),hieghtTree(root->right));
}

bool isBalanced(BinaryTreeNode<int>* root){

    if (root==NULL){
        return true;
    }
    int hieghtLeft=hieghtTree(root->left);
    int hieghtRight=hieghtTree(root->right);

    if (abs(hieghtLeft-hieghtRight)<=1 && isBalanced(root->left) && isBalanced(root->right)){
        return true;
    }
    return false;


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
    bool answer=isBalanced(root);
    cout<<answer;
}