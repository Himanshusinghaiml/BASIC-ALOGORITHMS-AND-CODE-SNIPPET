 // find first and last element occurence in array @ very important question using doivide and conquer method # binary search
 #include<iostream>
 using namespace std;
 int left(int arr[],int size,int target)
 {     int ans=-1;
       int start=0;
       int end=size-1;
       int mid=start+(end-start)/2;
       while (start<=end)
       {
         if (arr[mid]==target)
         {
              ans=mid;
              end=mid-1;
         }
         else if(target>arr[mid])
         {
              start=mid+1;
         }
         else if(target<arr[mid])
         {
            end=mid-1;
         }
         mid=start+(end-start)/2;
       }
    return ans ;   
       
 }
 int main()
 {
    int arr[]={1,2,3,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=4;
    cout<<" answer "<< left(arr,size,target);
    return 0;

 }