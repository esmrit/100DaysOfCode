#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;

int countNodes(BinaryTreeNode<int>* root){
    if (root==NULL){
        return 0;
}
    int ans=0;

    if (root->left!=NULL){
        ans=1+ans+(countNodes(root->left));
    }

    if (root->right!=NULL){
        ans=ans+1+(countNodes(root->right));
    }
    return ans;


}
// int countNodes(BinaryTreeNode<int>* root){
//     if (root==NULL){
//         return 0;
// }
//     return 1+countNodes(root->left) + countNodes(root->right);
// }

void printTreeLevel(BinaryTreeNode<int>* root){
    if (root==NULL){
        return;
    }
    queue <BinaryTreeNode<int>* > qe;
    qe.push(root);

    while(qe.size()!=0){
        BinaryTreeNode<int>* front=qe.front();
        cout<<front->data<<" ";
        qe.pop();

        if (front->left!=NULL){
            qe.push(front->left);
        }
        
        if (front->right!=NULL){
            qe.push(front->right);
        }
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
    // BinaryTreeNode<int>* root=new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>* node1=new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>* node2=new BinaryTreeNode<int>(3);
BinaryTreeNode<int>* root=takeInputLevel();
    // root->left=node1;
    // root->right=node2;
    printTreeLevel(root);
    cout<<endl;

    int answer=countNodes(root);

    cout<<"answer is: "<<answer;
}