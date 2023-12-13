#include<iostream>
using namespace std;
class node
{  public:
   int data;
   node*next;
   node(int data)
   {
    this->data=data;
    this->next=NULL;
   }
};
void insertatbeg(node*head,int d)
{
    node*temp=new node(d);
    temp->next=head;
    temp=head;
   // cout<<temp->data<<endl;
}
void print(node*&head)//same linked list update , it cant create duplicate link 
{
    for(node*temp=head;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data;
    }
}
int main()
{  
     node*node1=new node(1);
     node*head=node1;
     insertatbeg(head,15);
     print(head); 
    cout<<endl;
    // cout<<head->data;
    return 0;
}