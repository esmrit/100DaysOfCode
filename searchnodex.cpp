#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;

bool nodeExist(BinaryTreeNode<int>* root,int x){
    if(root==NULL){
        return false;
    }
    if (root->data==x){
        return true;
    }

    bool ans;
    if (x<root->data)
        {
        ans=nodeExist(root->left,x);
        }
    if (x>root->data)
        {
            ans=nodeExist(root->right,x);
        }
    return ans;


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
    int x;
    cout<<"input x"<<endl;
    cin>>x;

cout<<nodeExist(root,x);

}