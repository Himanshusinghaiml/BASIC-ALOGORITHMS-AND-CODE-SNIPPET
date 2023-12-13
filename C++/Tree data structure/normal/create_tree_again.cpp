#include<bits/stdc++.h>
using namespace std;
struct node
{   int data;
    node*left;
    node*right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
void print_preorder(node*root)
{
    if (!root)
    {
        return;
    }
    cout<<root->data<<" ";
    print_preorder(root->left);
    print_preorder(root->right);

}
 
void print_inorder(node*root)
{
    if (!root)
    {
        return;
    }
    // cout<<root->data<<" ";
    print_inorder(root->left);
    cout<<root->data<<" ";
    print_inorder(root->right);

}
void print_postorder(node*root)
{
    if (!root)
    {
        return;
    }
     
    print_postorder(root->left);
    print_postorder(root->right);
    cout<<root->data<<" ";

}
int height(node*root,int count)
{   
    if (root==NULL)
{
    return 0;
}
count++;
int lh=height(root->left,count);
int rh=height(root->right,count);
return count;

}
int main()
 {   
    node*root=new node(5);
    
    root->left->right=new node(6);
    root->left->left=new node(8);
    root->right=new node(7);
    root->right->left=new node(10);
    // preorderr call
    // we have to return pre order function 
    cout<<" preorder :"<<endl;
    print_preorder(root);
    
    //inorder 
    cout<<" inorder : "<<endl;
    print_inorder(root);
    // postorder
    cout<<" post order traversal : "<<endl;
    print_postorder(root);
    int cnt=0;
    int hieght_ans=height(root,cnt);
    cout<<" height of this tree : " <<hieght_ans;
    return 0;
}