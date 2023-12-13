#include<bits/stdc++.h>
using namespace std;
class node
{      public:
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
    if(!root)
        return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
void print1(node*root)
{
    if(!root)
        return;
        cout<<root->data<<" ";
    print1(root->left);
     
    print1(root->right);
}
void print2(node*root)
{
    if(!root)
        return;
    print2(root->left);
    
    print2(root->right);
     cout<<root->data<<" ";
}
int main()
{   
     node*root =new node(10);
     root->left=new node(20);
     root->right= new node(30);
     cout<<" ineorder "<<endl;
     print(root);
      cout<<endl<<" preorder "<<endl;
      print1(root);
       cout<<endl<<" postorder "<<endl;
       print2(root);

    return 0;
}