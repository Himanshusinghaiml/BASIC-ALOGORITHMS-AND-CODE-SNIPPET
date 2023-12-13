 #include<iostream>
using namespace std;
int main()
{    int arr1[5]= {1, 2, 4, 6, 10}; int n=5; int k=0;
     int arr2[5]= {4, 5, 6, 9, 12}; int arr3[n+n];
     int i,j=0;  
     while (i<n && j<n)
     {
          if(arr1[i]<arr2[j])
          {
            arr3[k]=arr1[i];
            i++; k++;
          }
          else
          {
             arr3[k]=arr2[j];
             k++;j++;
          }  
     }   
     for(int i=0;i<10;i++)
     {
        cout<<arr3[i]<<" ";
     }
     cout<<endl;
     int total=(n+n)/2;
     cout<<" total middle sum : "<< arr3[total-1]+arr3[total];
     
    return 0;
}