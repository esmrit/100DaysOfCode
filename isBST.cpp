#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;



int maximum(BinaryTreeNode<int>* root){
    if(root==NULL){
    return INT_MIN;
    }
    int ans=max( root->data, max(maximum(root->left),maximum(root->right)));
    return ans;
}

int minimum(BinaryTreeNode<int>* root){
if(root==NULL){
    return INT_MAX;
}
return min(root->data, min(minimum(root->left),minimum(root->right)));
}

bool isBST(BinaryTreeNode<int>* root){
    if (root==NULL){
        return true;
    }

    int leftMax=maximum(root->left);
    int rightMin=minimum(root->right);

    bool output=(root->data>leftMax) && (root->data <=rightMin) && isBST(root->left) && isBST(root->right);
    return output;
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
    
    bool answer=isBST(root);
    cout<<answer;

}