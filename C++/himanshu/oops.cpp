#include<iostream>
using namespace std;
class himanshu
{    // create a class u sing class and class name nad done it public ;
    // public means access to anuwhere either class or outside class 
     public:
     int a=25;
    //  private:
     int b=25;
     int c=a+b;

};
int main(){
    // class name and object variable
himanshu tiku;  // tiku is a object and himanshu is a class name 
tiku.a=94;
cout<< "  hello : "<<tiku.a <<" \n"<< tiku.c;
return 0;
}