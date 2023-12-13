#include<iostream>
using namespace std;
class bind
{
   int salary;
   public:
   void values(int s)// using setter 
   {
    salary=s;
   }
   int print()//using getter 
   {
    return salary;
   }
   
};
int main()
{    bind obj1,obj2;
     obj1.values(5000);
      obj1.values(10225);
     cout<<obj1.print()<<endl<<endl;
     cout<<"  second object : " <<obj2.print();
    return 0;
}