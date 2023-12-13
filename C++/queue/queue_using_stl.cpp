#include<bits/stdc++.h>
using namespace std;
int main()
{    queue<int> q;
    q.push(1); q.push(5);
     q.push(10);
      q.push(15);
       q.push(20);
       q.pop();
       cout<<q.front()<<" the value of first elemnt : "<<endl;
       
    
    cout<<q.size()<<endl;
    if(q.empty())
    {
        cout<<" queue is empty :"<<endl;

    }
    else{
        cout<<" queue is not empty : "<<endl;
    }
    return 0;
}
