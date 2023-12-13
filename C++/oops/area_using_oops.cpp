#include<iostream>
using namespace std;
// class area
// {   public:
//     int length;
//     int breadth;
//     int printarea(int l,int b)// using method or function
//     {
//         length=l;
//         breadth=b;
//         return l*b;

//     }
// };
// int main()
// {
//     area ans,ans1;
//     //  ans.printarea(25,556);
//   cout<<" the area of room : "<<ans.printarea(20,10)<<endl;
//   cout<<" same object : "<<ans.printarea(75,46)<<endl;
//    cout<<" different object but same class "<<ans1.printarea(75,46)<<endl;

//     return 0;
// }



// using constructor 
class check
{  public:
   int length;
   int breadth;
   check( int l,int b)
   {
    length=l;
    breadth=b;
   cout<<" the area of room  directly accesible : "<<l*b<<endl;
   cout<<" the area of room : "<<length*breadth<<endl;
   }
};
int main()
{
   check s1(5,2);
   cout<<s1.length;

    

    return 0;
}