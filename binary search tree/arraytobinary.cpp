#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;



BinaryTreeNode<int>* arrayToBST(int arr[], int si,int ei){
    if (si>ei){
        return NULL;
    }

    int mid=(si+ei)/2;
    BinaryTreeNode<int>* root= new BinaryTreeNode<int>(arr[mid]);

    root->left=arrayToBST(arr,si,mid-1);
    root->right=arrayToBST(arr,mid+1,ei);

    return root;
}

void preorderPrint(BinaryTreeNode<int>* root){
if (root==NULL){
    return ;
}

cout <<root->data<<" ";
preorderPrint(root->left);
preorderPrint(root->right);
}


int main(){
    int n;
    cout<<"input n"<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    BinaryTreeNode<int>* root=arrayToBST(arr,0,n-1);
    preorderPrint(root);

}