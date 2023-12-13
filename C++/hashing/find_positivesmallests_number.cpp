#include<iostream>
using namespace std;
int main()
{   
    int arr[5]={1,2,5,4,0};
    int hash[10]={0}; int n=5;
    for(int i=0;i<n;i++)
    {
          hash[arr[i]]=1;
    }
    for(int i=0;i<10;i++)
    {
        if(hash[i]==0)
        {
            cout<<" element not found  int the index :"<<i<<endl;break;
        }
    }

    return 0;
}