#include <iostream>
#include "treenode.h"
#include <queue>
using namespace std;

int greaterThanx(TreeNode<int >* root,int x){
    if (root==NULL){
        return 0;
    }
    int ans=0;
    
    if (root->data>x){
        ans=ans+1;
    }

    for (int  i = 0; i < root->children.size(); i++)
    {
            ans+=greaterThanx(root->children[i],x);
    }
    return ans;
     
}

bool compareTree(TreeNode<int>* root1,TreeNode<int>* root2){
    if (root1==NULL && root2==NULL){
        return true;
    }
    if (root1->data!=root2->data){
        return false;
    }
       
        if( root1->children.size() != root2->children.size()){
            return false;
        }

    for (int  i = 0; i < root1->children.size() && root2->children.size(); i++)
    {
        /* code */
        if (root1->children[i]->data!=root2->children[i]->data){
            return false;
        }
    }
    return true;
    
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

// void printTreelevelWise(TreeNode<int>* root){
//     queue <TreeNode<int>*> pn;
//     pn.push(root);

//     while(!pn.empty()){
//         TreeNode <int>* cur=pn.front();
//         pn.pop();
        
//         cout<<cur->data<<":";
        
//         for(int i=0;i<cur->children.size();i++){
//             if(i==cur->children.size()-1)
//                 cout<<cur->children[i]->data;
//             else
//                 cout<<cur->children[i]->data<<",";
//             pn.push(cur->children[i]);
//         }
//         cout<<endl;
//     }
// }


int main(){

    cout<<"first tree"<<endl;
    TreeNode<int >* root1= takeInputLevelWise();
    cout <<"second tree"<<endl;
    TreeNode<int >* root2= takeInputLevelWise();


    bool ans=compareTree(root1,root2);
    // int x;
    // cout <<"enter x"<<endl;
    // cin>>x;
    // printTreelevelWise(root);
    // int ans=greaterThanx(root,x);
    // postorder(root);
    cout<<ans;
    
}