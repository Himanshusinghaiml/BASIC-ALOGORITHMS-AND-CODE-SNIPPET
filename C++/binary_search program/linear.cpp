#include<iostream>
using namespace std;
void search(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<" yes element found at index : "<<i;
            
        }
         
    }
    cout<<endl;
    cout<<" the array of the element in this does not found "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<key<<" element not found in the given array ";
     
}
int main()
{
    int ar[]={5,7,8,9,5,6,10,2,3,5,6,};
    int num;
    cout<<" enter the searching number :"<<endl;
    cin>>num;
    int l=sizeof(ar)/sizeof(ar[0]);
    search(ar,num,l);
    cout<<endl<<" length of the array : "<<l<<endl;
    return 0;

}