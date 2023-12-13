#include<iostream>
using namespace std;
// int print(int a,int sum)
//  {  if(a==10)
//  {  cout<<a;
//     sum=sum+a;
//     return  sum ;
//  }  
//     sum=sum+a;
//     cout<<a<<" ";
//     print(a+1,sum);
//  }
    

// int main()
// {   int a=1; int sum=0;
//     int ans=print(a,sum);
//     cout<<endl;
//     cout<<ans<<endl;     
//     return 0;
// }

// print array using array 
void print(int arr[],int len)
{   
    static int i=0;
    
 
    if (i==len) 
    {  
        return;
    } 
    cout<<arr[i]<<" "; i++;
    
    print(arr,len);
}
int main()
{  int arr[]={5,4,2,5,6,2,2,33,2};
   int len=sizeof(arr)/sizeof(arr[0]);
    print(arr,len);
    return 0;
}