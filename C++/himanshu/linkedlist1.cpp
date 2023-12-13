#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int data)
    {
          this->data=data;
          this->next=NULL;
    }

};
void display(node* &head,int data)
{     
      node*temp=new node(data);
      temp->next=head;
      head=temp;
    // temp=head;  which is very important to understand assign operator 
}
void end(node*&tail,int data)
{
     node*temp=new node(data);
     tail->next=temp;
     tail=temp;
}
void atmiddle(node* &head,int pos,int data)
{
    int cnt=1; node*temp=head;
    while(cnt<pos-1)
    {
        temp=temp->next;cnt++;
    }
    node*insertatmiddle=new node(data);
    node*after=temp->next;
    temp->next=insertatmiddle;
    insertatmiddle->next=after;
    
}  
void reverse(node*  &head)
{     
    node*temp=head;
    node*prev=NULL;
    node*after=NULL;
      
    while (temp!=NULL)
    {   after=temp->next;
        temp->next=prev;
        prev=temp;
        temp=after;
    }
     
}
void cnt_node(node*&head,int pos)
{     
  int total=1;
  node*temp=head;
   
  while (temp!=NULL)
  {
     total++;
     temp=temp->next;  
  }  
   int var=total-pos;  
       if(temp!=NULL)
       {   
         cout<<" tiku  krfmlsdflfk"; 
           
       }
        
     
      
     else
     {
            
       while(int i=0<var)
       {     
           temp=temp->next; 
            cout<<" tiku : ";
            i++; 
       }
  
    }
}
void print(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {  
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<endl;
}
int main()
{   node*node1=new node(1);
    node*head=node1;
    node*tail=node1;
    display(head,5);
    display(head,100);
    end(tail,500);
    end(tail,4587);
    end(tail,87);
    display(head,10);
    atmiddle(head,3,25);
    atmiddle(head,9,250);   print(head);
    cnt_node(head,5);
    // reverse(head);// WHY IS THE IS NOT WORKING 
    // print(head);
    return 0;
}