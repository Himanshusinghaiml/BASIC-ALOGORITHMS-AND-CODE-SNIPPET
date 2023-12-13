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
        this->a=a;
        this->b=b;
    }
    int get()
    {
        return a+b;
    }
};
int main()
{  
     
    sum ob;
    ob.set(20,20);
    cout<<ob.get();

    return 0;
}