
#include<iostream>
#include<stack>
using namespace std;
class stack
{ public:
  int *arr;
  int top;
  int size;
  stack(int size)
  {  
    this->size = size;
    arr=new int[size];
    top=-1;
  }


void push(int element )
{
   if (size - top  > 1)
   {
    top++;
    arr[top]=element;
   }
   else{
    cout<<" stack overflow";
   }
}
void pop()
{
  if(top>=0)
  {
    top--;
  }
  else{
    cout<<" stack underflow : ";
  }
}
int peek()
{
   if(top>=0)
   {
    return arr[top];
   }
}
bool isempty()
{
   if(top==-1)
   {
    return true;
   }
   else
   {
    return false;
   }
}
};
int main()
{   
    stack st(5);
    st.push(2);
    st.push(20);
    cout<<st.peek()<<endl;
    return 0;
}