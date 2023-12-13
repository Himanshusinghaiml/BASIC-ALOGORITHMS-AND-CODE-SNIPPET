#include<iostream>
using namespace std;
// int fact(int n)
// {   
//     if (n==1)
//     {   cout<<n<<endl;
//         return  1;
//     }
//     else
//     {
//         cout<<n <<endl;
//         return n * fact(n-1);
//     }

// }
// int main()
// {
//     int a;
//     cout<<" enter the number for factoraial : ";
//     cin>> a;
//     // int ans=fact(a);
//     // cout<<"factoral of ans :  "<< ans;
//     // in one line in c++
//     cout<<"factorial of  "<<a<<" : "<< fact(a);
//     return 0;
// }
void print(int n)
{



    if(n>=10)
    {
        cout<<" murkh vyakti keval 10 ke andar le input kro idiot  ";
    }
    
    else if  (n>=1)
    {
        cout<<n<<endl;
        print(n-1);
        return;
    }
    else if(n<0)
    {
        cout<<" murkh vyakti positve value input kro";
    }
   
    
}
int main()
{
    int n;
    cout<<" enter the number for factorial";
    cin>> n;
    print(n);
    return 0;
}