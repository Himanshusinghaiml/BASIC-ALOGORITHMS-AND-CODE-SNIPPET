#include<iostream>
using namespace std;
class node
{    public:
    int data;
    node*next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(node*&head)
{
    node*temp=head;
    for (temp;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data;
        cout<<endl;
    }
}
int main()
{   int n; int num;
    cout<<" enter the size of  the node";
    cin>>n;
    cout<<" enter the node"<<endl;
    cin>>num;
    node*store;
    for(int i=0;i<n;i++)
    {
        node*temp=new node(num);
        print(temp);

    }

    //node*temp=new node(1);
    //print(temp);
    
    return 0;
}