#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next=NULL;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

void display(node*&head,int data)
{
    node*temp=new node(data);
    temp->next=head;
    head=temp;
    // cout<<temp->data<<" ";   


}
void print(node*&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{   node*node1=new node(1);
    // node*node2=new node(2);
    node*head=node1;
    // head->next=node2;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for (int i=0;i<10;i++)
    {
        display(head,arr[i]);
    }
    print(head);
    return 0;
}