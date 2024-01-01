#include<bits/stdc++.h>
using namespace std;
class sum
{
    private:
    int a;
    int b;
    public:
    void set(int a,int b)
    {
           a=a;
           b=b;
    }
    void set1(int f,int f1)
    {
          a=f;
          b=f1;
    }
    int getans()
    {
        return  a+b;
    }
    int get()
    {
        // return a+b;
        return  a+b;
    }
};
int main()
{  
     
    sum ob;
    ob.set1(50,50);
    cout<<ob.getans()<<endl;

    
    ob.set(20,20);
    cout<<ob.get();

    return 0;
}