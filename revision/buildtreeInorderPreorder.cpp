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

BinaryTreeNode<int>* treeBuilder(int *in,int* pre, int inS,int inE,int preS,int preE){
    if (inS>inE){
        return NULL;
    }

    int rootData=pre[preS];


    /* 
        preorder= root->left->right
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
    int linE=rootIndex-1; //traverse into inorder and find the index of root in it so left ends just before the root index
    int lpreS=preS+1; //left of preorder starts after root that is value just next to preS  
    int lpreE=linE-linS+lpreS; //AS preorder size=in order size => linE-linS=lpreE-lpreS =>lpreE=linE-linS+lpreS
    
    int rpreS=lpreE+1;// starts just after end of pre in left
    int rpreE=preE; //same as preorder end
    int rinS=rootIndex+1;//kust after root index value wjich we traversed earlier in inorder;
    int rinE=inE;//same as inorder end
   
    
    BinaryTreeNode<int >* root= new BinaryTreeNode<int>(rootData);
    root->left=treeBuilder(in ,pre,linS,linE,lpreS,lpreE);
    root->right=treeBuilder(in ,pre,rinS,rinE,rpreS,rpreE);
    return root;
}

BinaryTreeNode<int>* buildTree(int* in,int* pre,int size){
    return treeBuilder(in,pre,0,size-1,0,size-1);
}

int main(){
int in[]={4,2,5,1,8,6,9,3,7};
int pre[]={1,2,4,5,3,6,8,9,7};

BinaryTreeNode<int>* root=buildTree(in,pre,9);
printTreeLevel(root);
}