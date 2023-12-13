#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
       this-> data=data;
       this-> next=NULL;
    }
};
void insert_head(node* &head,int d)
{
    node*temp=new node(d);
    temp->next=head;
    head=temp;
    // temp=head;
}
void print(node* &head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    // for(node*head;head!=0;head->next)
    //   {
    //     cout<<head->data<<endl;
    //   }   
    
     
}
int main()
{   node*node1=new node(1);
    // cout<<node1->next<<endl<<node1->data;
    node* head=node1;
    insert_head(head,12);
    insert_head(head,12);
    print(head);



    return 0;

}