// #include<iostream>
// using namespace std;
// int main()
// {  int x=5; int i =1;
//      while(x--)
//      {
//         cout<<i<<" "<<" himanhu singh  : "<< endl; i++;
//      }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
cout<<" enter the size of the array : ";
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
   cin>>arr[i];
}
cout<<" before array : ";
for(int i=0;i<n;i++)
{
   cout<<arr[i]<<" ";
} cout<<endl;
sort(arr,arr+n);
cout<<" sorted array : "<<endl;
for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
}

   return 0;
}