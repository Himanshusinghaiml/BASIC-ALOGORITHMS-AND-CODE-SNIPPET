#include<bits/stdc++.h>
using namespace std;
class queue{
    int *arr;
    int size;
    int rear;
    int front ;
    public:
    queue()
    {
        size=100;
        arr=new int[size];
        front =0;
        rear=0;
    }
    void enqueue(int data)
    {
        if (rear==size)
        {
            cout<<" queue is  already full : "<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
int pop()
    {
    if(front==rear)
    {
        return -1;
    }
    else{
        arr[front]=-1;
        front++;
        if(front==rear)
        {
            front=0;
            rear=0;
        }
    }
    }
int front()
{
    if(front==rear)
    {
        return -1;
    }
    else{
        return arr[front];
    }
}
bool empty()
{
    if(front==rear)
    {
        return true;
    }
    else{
        return true;
    }
}
    

};
int main()
{     queue q;
    //   q.push(10);
    //   q.push(15);
    //   q.push(30);
    //   q.push(50);
    //   cout<<q.front()<<endl;
         
    return 0;
}