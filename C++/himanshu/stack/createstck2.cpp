#include<iostream>
using namespace std;
#define n 2
class stack
{  public:
   int *arr;
   int top;
   stack()
   {
    arr=new int[n];
    top=-1;
   }
void push(int data)
   {  if (top==n-1)
   {
    cout<<" stack overflow : ";
   }
   else{
    top++;
    arr[top]=data;
    }
   }
void pop()
   {
    if(top==-1)
    {
        cout<<" stack alreaddy underflow : ";
    }
    else{
        top--;
    }
   }
int peek_top()
   {  if (top==-1)
   {
    cout<<" in stack data not present : ";
   }
   else{
    return arr[top];
   }

   }
int empty()
{
     return top==-1;
}   
     
   
};
int main()
{   stack st;
    st.push(10);
    st.push(15);
    st.push(20);
    cout<<st.peek_top()<<endl;
    // st.pop();
    //    cout<<st.peek_top()<<endl;  //st.pop();
    //    cout<<st.peek_top()<<endl;
    //    cout<<st.empty()<<endl;
    return 0;
}