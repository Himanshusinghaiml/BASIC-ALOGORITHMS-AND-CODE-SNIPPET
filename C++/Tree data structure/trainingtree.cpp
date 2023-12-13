#include<iostream>
using namespace std;
struct node
{
    int data;
    node*left;
    node*right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void print(node*root)
{
    if(root==NULL)return ;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main()
{
      node*root=NULL;
      root=new node(5);
      root->left=new node(6);
      root->left->left= new node(8);
      root->left->right=new node(9);
      root->right= new node(7);
      root->right->left= new node(10);
      root->right->right = new node(11); 
      print(root);
}