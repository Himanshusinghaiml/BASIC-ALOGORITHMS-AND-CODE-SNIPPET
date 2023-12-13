#include<iostream>
using namespace  std;
class parent
{  public:
   string name=" thakur ";
};
class student:public parent
{  public:
    string name=" thakur ";

};
int main()
{   student s1;
cout<<s1.name;
    return 0;
}