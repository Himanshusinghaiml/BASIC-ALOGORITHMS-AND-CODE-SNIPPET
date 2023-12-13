#include<iostream>
using namespace std;
void printsum(int n,int sum)
{    
    if ( n==10)
     {   cout<<n<<" : ";
         sum=sum+n;
         cout<<sum<<endl;
         cout<<" addition of total number : "<< sum;
        return  ;
    }
    else
    {
        // cout<<n<<endl;
        sum=sum+n;
        cout<<n<<"  :  "<<sum<<endl;
        printsum(n+1,sum);
    }
    // cout<<sum<<endl;

}
int main()
{   
    int n;
    cout<<" enter the number less than 10 : "; 
    cin>>n;
    int sum=0;
    printsum(n,sum);
    return 0;
}