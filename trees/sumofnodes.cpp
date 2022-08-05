#include <iostream>
#include "treenode.h"
#include <queue>
using namespace std;

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

TreeNode<int >* takeInput(){
     int rootData;
     cout<<"enter data"<<endl;
     cin>>rootData;
     TreeNode<int>* root=new TreeNode<int>(rootData);

     int n;
     cout<<"intput number of children of "<<rootData<<endl;
     cin>>n;

     for (int  i = 0; i < n; i++)
     {
        TreeNode<int >* child=takeInput();
        root->children.push_back(child);
     }
     return root;
}

int sum(TreeNode<int>* root){
    int ans=root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans+=sum(root->children[i]);
    }
    return ans;
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

void printTree(TreeNode<int>* root){
    if (root==NULL){
        return;
    }
    cout<<root->data<<":";
    for (int i = 0; i < root->children.size() ; i++)
    {
        
        cout <<root->children[i]->data<<",";
    }
    
   cout<<endl;
    for (int  i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
    
}


int main(){

    // TreeNode <int > *root =new TreeNode<int>(10);
    // TreeNode <int > *node1 =new TreeNode<int>(20);
    // TreeNode <int > *node2 =new TreeNode<int>(30);

    // root->children.push_back(node1);
    // root->children.push_back(node2);
    
    TreeNode<int >*root= takeInputLevelWise();
    // printTreelevelWise(root);
    int answer=sum(root);

    cout<<answer;
    
}