#include<iostream>
using namespace  std;
struct  student
{
    int roll_no;
    string  name;
};

int main()
{
    student s1;
    s1.name="himanshu singh";
    s1.roll_no=03;
    cout<<s1.name<<" "<<s1.roll_no;

}