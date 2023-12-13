#include<bits/stdc++.h>
using namespace std;
class node
{  public:
   int data;
   node*left;
   node*right;
   node(int x)
   {
    data=x;
    left=NULL;
    right=NULL;
   }

};
node *create_tree(node*root)
{
       int data;
       cout<<" enter the data"<<endl;
       cin>>data;
       root=new node(data);
       if(data==-1)return NULL;
       cout<<" enter the data left child "<<data<<endl;
       root->left=create_tree(root->left);
       cout<<" enter the data right child for "<<data<<endl;
       root->right=create_tree(root->right);
       return root;
}
void print(node*root)
{
    if(!root)return ;
    cout<<root->data;
    print(root->left);
    print(root->right);
}
int main()
{
    node *root, *ans =NULL;
    ans=create_tree(root);
    print(ans);
    return 0;


}