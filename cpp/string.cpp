#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s,int n)
{
    // if(s[0]!=s[n-1])return false;
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        if(s[left]!=s[right])return false;
        left++;
        right--;
    }
    return true;
}
bool binary(vector<int>&arr,int target)
{
      int right=arr.size()-1;
      int  left=0;
      while(left<right)
      {
        int mid=left+(right-left)/2;
        if(arr[mid]==target)
        {
            return true;
        }
        else if(arr[mid]<target) 
        {
            left=mid+1;
        } 
        else right=mid-1;
      } return false;
}
int main()
{    // this is the program for palindrome string or not 
    // string s ;
    // cout<<" enter the string ";
    // getline(cin,s);
    // int n=s.size(); 
    
    // if(palindrome(s,n))cout<<" yes this is palindrom string ";
    // else cout<<"  this is not palindrome ";

    // practice binary search 
    vector<int>arr;
    int n;
    cout<<" enter the elements for the array : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
         int x;
         cin>>x;
         arr.push_back(x);
    }
   int target=90;
   // we can define function in also conditionn , do not need define explicitly 
    if(binary(arr,target))cout<<" yes element found";else cout<<" not found";
    return 0;
}