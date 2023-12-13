 #include<iostream>
 using namespace std;
 /*int main()
 {
    int n;
    cout<<" enter the number : ";
    cin>> n;
    if (n==0)
    {
        cout<<" given number zero"<<n;
    }
    else if (n<0)
    {
        cout<<" given number negative"<< n;

    }
    else
    {
        cout<<" the number is given positive";
    }
    return 0;
 }
 int main()
 {
    int a, b;
    cout<<"\n enter the two number";
    cin>> a>>b;
    cout<<" these are two number : "<<a<<" "<<b<<" \n";
    if (a>b)
    {
        cout<<a<<"  is greater";
    }
    else
    {
        cout<<b <<" is greater";
    }
    return 0;
 }*/
 //  while loop in c
//  int main()
//  {  int n=10;
//     // cout<<" enter the number";
//     // cin>>n;
//     cout<<" print number  1 to 10 using while loop";
//     int i=1;
//     while (i<=n)
//     {
//         cout<<i<<"\n";
//         i++;
//     }
//     cout<<" print number 1 to 10 using for lopp in C++ \n";
//     for (int j=1;j<=10;j++)
//     {
//         cout<<j <<"\n";

//     }
    
    
//     return 0;
    
    
//  }
// int main()
// {
//     int fact=1; int n;
//     cout<<" enter the number to calculate for factorial : ";
//     cin>> n;
//     int i=1;
//     while (n>=1)
//     {   fact=fact*n;
//         n--;
//         // cout<<" factorail : "<< f;
//     }
//     cout<<" factorail : "<< fact;
//     return 0;
    
// }

// print a table in C++
// int main()
// {
//     int n;
//     cout<<" enter the number";
//     cin >>n;
//     int i=1;
//     while (i<=10)
//     {
//         cout<<n<<" * "<< i<<" = " << n*i<<"\n";
//         i++;
//     }
//     // print a number using for loop
//     cout<<" print a table using for loop in C++";
//     for (int j=1;j<=10;j++)
//     {
//         cout<<n<<" * "<< j<<" = " << n*j<<"\n";
//     }
// }

//  print a given number in reverse order 
int main()
{
    int n;
    cout<<" enter the number";
    cin>>n;
    int rev=0;
    while (n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<" reverse :   "<< rev;
    return 0;
}