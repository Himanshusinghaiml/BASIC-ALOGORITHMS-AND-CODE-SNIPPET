#include<bits/stdc++.h>
#include<map>
using namespace std;
void print()
{
    int arr[5]={1,2,4,1,4};
    map<int,int>m;
    for(int i=0;i<5;i++)
    {
       m[arr[i]]++;
    }
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main()
{   
    map<string,int>m;
    m["tiku singh"]=1;
     m["himanshu singh"]=6;
     m["tiku singh"]=2;
     //m["tiku singh"]=2;
    //  m.insert(make_pair("asus",4));
     for(auto i:m)
     {
        cout<<i.first<<" "<<i.second<<endl;
     }
     int sum=0;
     for(auto i:m)
     {
        sum+=i.second;
     }
    // map<string,int>::reverse_iterator itr;
    map<string,int>::iterator itr;
    cout<<endl<<" the sum of values in map  :"<<sum<<endl;
    // for(itr=m.rbegin();itr!=m.rend();itr++)
    // {
    //        cout<<itr->first<<" "<<itr->second<<endl;
    // }
    for(itr=m.begin();itr!=m.end();itr++)
    {
           cout<<itr->first<<" "<<itr->second<<endl;
    }
    print();
    return 0;
}