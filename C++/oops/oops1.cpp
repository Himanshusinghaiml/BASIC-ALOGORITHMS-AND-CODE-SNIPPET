#include<iostream>
using namespace std;
class myname
{   public:
    int age;
    string name;
    int rollno;
    //private:
    void print()
    {
        cout<<"this is method and also function : "<<" hello wrold : "<<endl;
    }


};
int main()
{
    myname s1;// create 1st object 
    s1.age=90;
    cout<<" the age of class in declare : "<<s1.age<<endl;
    s1.name=" himanshu singh ";
    cout<<" the name of that class : "<<s1.name<<endl;
    // creating second object 
    myname s2;
    s2.name=" kishan singh ";
    s2.age=40;
    cout<<" access through second object : "<<s2.name<<" "<<s2.age<<endl;
     s2.print();
    return 0;
}