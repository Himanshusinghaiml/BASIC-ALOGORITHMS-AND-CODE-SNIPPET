#include<iostream>
using namespace std;
// int add(int a, int b)
// {
//       int c = a+b;
//       cout<< " addition of two number : "<< c;
// }
// int main()
// {
//     int a ,b;
//    /* a=10;
//     b=20;*/
//     cout<<" enter the two number : ";
//     cin>> a>>b;


//     int sum=add(a,b);
//    // cout<<" addition of two numbers : "<<sum;
//     return 0;
    
// }
 





#include<algorithm>
int main()
{
    int arr[]={ 0,2,4,7,1,3,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);
     for (int i=0;i<len;i++)
    {
        cout<<" before array : "<<arr[i]<<endl;
    }
    cout<<" this is the adrress  of first element : "<<arr<< endl;
    cout<<" lenght of array : "<<len<<endl ;
    cout<<" thses are ascending order : "<< endl;
    sort(arr,arr+len);
    for (int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}