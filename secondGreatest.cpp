#include <iostream>
#include "treenode.h"
#include <queue>
using namespace std;

 
TreeNode<int>* secondGreatest(TreeNode<int>* root,TreeNode<int>* &cur,TreeNode<int>* &prev){
    if(root==NULL)
        return NULL;
    
    for(int i=0;i<root->children.size();i++){
        
        TreeNode<int>* temp=root->children[i];
        
        if(cur->data<temp->data){
            prev=cur;
            cur=temp;
        }
        temp=secondGreatest(root->children[i],cur,prev);
    }
    return cur;
}



TreeNode<int >* takeInputLevelWise(){
    int rootData;
    cout<<"enter root data"<<endl;

    cin>>rootData;

    TreeNode<int >* root=new TreeNode<int >(rootData);
    queue<TreeNode <int>*> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size()!=0)
    {
        TreeNode<int >*front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"enter num of children "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout<<"enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child= new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}




void postorder(TreeNode<int >* root){

    if (root==NULL){
       return; 
    }  
    for (int  i = 0; i <root->children.size() ; i++)
    {
        postorder(root->children[i]);
    }
    cout <<root->data<<" ";
}



int main(){

    cout<<"first tree"<<endl;

   TreeNode<int >* root= takeInputLevelWise();
   TreeNode<int>* cur=root;
   TreeNode<int>* prev=NULL;
    
    TreeNode<int>* x=secondGreatest(root,cur,prev);
    cout<<prev->data;

    
}

