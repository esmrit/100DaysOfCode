#include <bits/stdc++.h>
#include "binaryTreeNode.h"
#include<queue>
using namespace std;

vector<int>* pathToNode(BinaryTreeNode<int>* root,int x){
    if (root==NULL){
        return NULL;
    }

    if (root->data==x){
        vector<int>* output=new vector<int>();
        output->push_back(root->data);
        return output;
    }

    vector<int>* leftOut=pathToNode(root->left,x);
    if(leftOut!=NULL){
        leftOut->push_back(root->data);
        return leftOut;
    }

    vector<int>* rightOut=pathToNode(root->right,x);
    if(rightOut!=NULL){
        rightOut->push_back(root->data);
        return rightOut;
    }
    else{return NULL;}
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
    cout<<"enter x"<<endl;
    int x;
    cin>>x;
    vector<int>* out=pathToNode(root,x);

    for (int i = 0; i < out->size(); i++)
    {
        cout<< out->at(i)<<" ";
    }
    

}