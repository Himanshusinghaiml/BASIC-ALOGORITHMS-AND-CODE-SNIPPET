#include<iostream>
using namespace std;
class kit
{
    public:
    int num=10;
    int num2;
    void print()
    {
        cout<<" himanshu singh : "<<endl;
        cout<<" how are you himanshu "<<endl;
    }
};
class btech:public kit
{
    public:
     int num=20;
     void print()
     {
        cout<<" fdjhkfhjsdf";
     }
};
int main()
{
   btech p;
   
   cout<<p.num<<p.num<<endl;
    p.print();
    return 0;
}
