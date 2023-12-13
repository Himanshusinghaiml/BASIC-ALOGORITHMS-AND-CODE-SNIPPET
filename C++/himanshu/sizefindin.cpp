#include<iostream>
using namespace std;
int merge(int arr1[],int arr2[],int arr3[],int n1,int n2 )
{
    int i=0;
    int j=0;
    int k=0;
    while (i<n1 && j<n2)
    {
        if (arr1[i]<arr2[j])
        {
           arr3[k]=arr1[i];
            
           k++;i++;
        }
        else
        {
            arr3[k]=arr2[j];
            k++;j++;
        }
    }
    while (i<n1)
    {
        arr3[k]=arr1[i];
        k++;i++;
    }
    while (j<n2)
    {
        arr3[k]=arr2[j];
        k++;j++;
    }
    
    
    
}
void print(int arr3[],int n3) 
   {
    for (int i=0;i<n3;i++)
    {
         cout<<arr3[i]<<" ";
    }
    cout<<endl;
   }
void find_median(int arr3[],int n3)
{  int first=0;
  if (n3%2==0)
  {
    //    int even = ((n3/2)+(n3/2))/2;
    int a1=n3/2;
    int a2=(n3+2)/2;
    cout<<" a1 ki value : "<<a1<<endl <<" and b1 ki vlaue "<<a2<<endl;
    float sum=arr3[a1-1]+arr3[a2-1];
    float ans=sum/2;
    // cout<<ans;
       cout<<" this is even for median : " <<ans ;
  }
  else
  {   // int even=(n3+1)/2;
     int mid= (first+n3)/2;
     cout<<" this is the median : "<< arr3[mid];
       
  }
}
int  main()
{
  int arr1[2] ={1,2};
  int arr2[2]={3,4};
  int arr3[4]={0};
  merge(arr1,arr2,arr3,2,2);
  print(arr3,4);
   
  find_median(arr3,4);

   return 0;
}



// #include<iostream>
// using namespace std;
// void merge(int a[],int b[],int c[],int n1,int n2)
// {
//      int i=0;int j=0;int k=0;
//      while (i<n1)
//      {
//         c[k]=a[i];
//         k++;i++;
//      }
//      while(j<n2)
//      {
//         c[k]=b[j];
//         k++;j++;
//      }
// }
// int main()
// {
//     int a[3]={4,5,6};
//     int b[5]={5,7,8,9,6};
//     int c[8]={0};
    
//     merge(a,b,c,3,5);
//     for (int i=0;i<8;i++)
//     {
//         cout<<c[i]<<" ";
//     }
    
//     return 0;

// }