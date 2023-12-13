#include<bits/stdc++.h>
using namespace std;
int main()
{
   //  int arr[]={1,8,9};
   //  int n=sizeof(arr)/sizeof(arr[0]);
   // cannot allocate memory at run time then used vector;
   vector<int>arr={9,9,9,9};
   //output->1 0 0 0 0
   int n=arr.size();
      
    int j=n-1;
    while(j>=0)
    { 
      if(arr[j]!=9)
      {
          arr[j]++;
          break;
      }
      if(arr[j]==9)
      {
         arr[j]=0;
         //corner cases
         if(j==0)
         {
             arr.insert(arr.begin()+0,1);//add 1 first index
            //  vector_name.insert(vector_name.begin() +0,1);
         }
      }
      else{
         arr[j]++;
      }
      j--;
    }
     
    

     for(int i=0;i<arr.size();i++)
     {
        cout<<arr[i]<<" ";
     }
}
