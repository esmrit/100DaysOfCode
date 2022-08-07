#include <iostream>
#include "treenode.h"
#include <queue>
using namespace std;


int hightoftree(TreeNode<int>* root){
    if (root==NULL){
        return 0;
    }
    int ans=1;

    for (int i = 0; i < root->children.size(); i++)
    {
        ans=max(ans,1+hightoftree(root->children[i]));
    }
    return ans;
}

TreeNode<int >* takeInputLevelWise(){
    int rootData;
    cout<<"enter root daat"<<endl;

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


void printTreelevelWise(TreeNode<int>* root){
    queue <TreeNode<int>*> pn;
    pn.push(root);

    while(!pn.empty()){
        TreeNode <int>* cur=pn.front();
        pn.pop();
        
        cout<<cur->data<<":";
        
        for(int i=0;i<cur->children.size();i++){
            if(i==cur->children.size()-1)
                cout<<cur->children[i]->data;
            else
                cout<<cur->children[i]->data<<",";
            pn.push(cur->children[i]);
        }
        cout<<endl;
    }
}


int main(){

    
    TreeNode<int >*root= takeInputLevelWise();
    // printTreelevelWise(root);
    int answer=hightoftree(root);

    cout<<answer;
    
}