#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;

void inOrderPrint(BinaryTreeNode<int>* root){
if (root==NULL){
    return ;
}
cout <<root->data;
inOrderPrint(root->left);
inOrderPrint(root->right);

}

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
        cout<<endl;
    }
}

BinaryTreeNode<int>* treeBuilder(int *in,int* post, int inS,int inE,int postS,int postE){
    if (inS>inE){
        return NULL;
    }

    int rootData=post[postE];
    /* 
        postorder= left->right->root
        inorder= left->root->right
    */
    int rootIndex=-1;

    for (int i =inS ; i <= inE; i++)
    {
        /*to find the index of root in preorder array*/
        if (in[i]==rootData){
            rootIndex=i; 
            break;
        }
    }

    int linS=inS;       
    int linE=rootIndex-1; 
    int lpostS=postS;  
    int lpostE=linE-linS+lpostS;
    
    int rpostS=lpostE+1;
    int rpostE=postE-1;
    int rinS=rootIndex+1;
    int rinE=inE;    
    BinaryTreeNode<int >* root= new BinaryTreeNode<int>(rootData);
    root->left=treeBuilder(in ,post,linS,linE,lpostS,lpostE);
    root->right=treeBuilder(in ,post,rinS,rinE,rpostS,rpostE);
    return root;
}

BinaryTreeNode<int>* buildTree(int* in,int* post,int size){
    return treeBuilder(in,post,0,size-1,0,size-1);
}

int main(){
int in[]={4,2,5,1,8,6,9,3,7};
int post[]={4,5,2,8,9,6,7,3,1};


BinaryTreeNode<int>* root=buildTree(in,post,9);
printTreeLevel(root);
}