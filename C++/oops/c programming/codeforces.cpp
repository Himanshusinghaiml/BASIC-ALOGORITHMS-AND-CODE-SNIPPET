#include<bits/stdc++.h>
using namespace std;
void p()
{   map<int,int>m1;
    int arr[5]={5,5,6,4,6};
    for(int i=0;i<5;i++)
    {
        //  m1[arr[i]]++;
        m1.insert(make_pair(arr[i],m1[arr[i]]++));
    }
    for(auto k:m1)cout<<k.first<<" "<<k.second<<endl;
}
void college()
{
        int n=7;
        int arr[]={1,1,2,1,3,3,3}; int sum=0;
        map<int,int>m;
        for(auto i:arr)
            m[i]++;
        for(auto i:m)if(i.second>1)sum+=i.first;    
        cout<<endl<<sum;
}
void function1()
{

}
void mappingarray()
{       int n=7;
        int arr[]={1,1,2,1,3,3,3}; int sum=0;
        map<int,int>m;
         cout<<endl<<"this is mappingarray element" <<endl;
        for(auto i:arr)
            m[i]++;
        cout<<m[1]<<"  "<<m[3];

}
int main()
{
     
    map<int,int>m;
    map<int,int>::reverse_iterator it;
    m[50]=70;
    m[10]=100;
    m.insert(make_pair(80,100));
    for(auto i:m)cout<<i.first<<" "<<i.second<<endl;
    for(it=m.rbegin();it!=m.rend();it++)
    {
         cout<<it->first;    
    }
     
    // p();
    college();
    mappingarray();
     
}