#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;


class isBST_Return{
public:
    bool BST;
    int mini;
    int maxi;
};

isBST_Return isBSTanswer(BinaryTreeNode<int>* root){
    if (root==NULL){
        isBST_Return output;
        output.BST=true;
        output.mini=INT_MAX;
        output.maxi=INT_MIN;
        return output;
    }

    isBST_Return leftOutput=isBSTanswer(root->left);
    isBST_Return rightOutput=isBSTanswer(root->right);

    int minimum=min(root->data,min(leftOutput.mini,rightOutput.mini));
    
    int maximum=max(root->data,max(leftOutput.maxi,rightOutput.maxi));

    bool finalAnswer=(root->data>leftOutput.maxi)&&(root->data<=rightOutput.mini)&& leftOutput.BST && rightOutput.BST;

    isBST_Return output;
    output.BST=finalAnswer; 
    output.maxi=maximum;
    output.mini=minimum;

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
    
    isBST_Return answer=isBSTanswer(root);
    bool bstans=answer.BST;
    cout<<bstans<<endl;
}