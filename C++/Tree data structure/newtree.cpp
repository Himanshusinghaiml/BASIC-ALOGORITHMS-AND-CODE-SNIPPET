#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;
    void set(int data )
    {// getter and setter 
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
int main()
{     // either we can create a value during construtor type 
      node*ptr =new node();
      ptr->set(10);   // using the set the value 
      ptr->left=new node();
      ptr->left->set(20);
      cout<<ptr->data;
      
}