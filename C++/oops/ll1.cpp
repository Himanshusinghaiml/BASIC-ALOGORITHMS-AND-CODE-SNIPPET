#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
};
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{  
    node*head;
    node*temp=new node();
    temp->data=45;
    temp->next=NULL;
    node*temp2=new node();
    temp2->data=100;
    temp2->next=NULL;
    temp->next=temp2;
    head=temp;
    print(head);

    return 0;
}