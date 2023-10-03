#include<iostream>
using namespace  std;
struct  student
{  // structure does not provide security but classes provide security 
// with th help of access modifier like private ,protected , public
    int roll_no;
    string  name;
};

int main()
{
    student s1;
    s1.name="himanshu singh";
    s1.roll_no=03;
    cout<<s1.name<<" "<<s1.roll_no<<endl;
    // also we can access the element of the structure with the help of pointer 
    struct student *s;
    s=&s1;
    s->name="rahul singh";
    cout<<s->name;

}