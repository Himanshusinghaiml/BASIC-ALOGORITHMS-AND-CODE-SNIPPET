#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int>v;
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //  for(int i=0;i<=10;i++)
    //  {
    //     v.push_back(i);
    //  }
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

        // for( int i=1;i<=10;i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        for(auto ele:v)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
         v.pop_back();
         for(auto ele:v)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
        vector<int>v1(3,10);
         for(auto ele:v1)
        {
            cout<<ele<<" ";
        }
        swap(v,v1);
        cout<<endl;
         for(auto ele:v1)
        {
            cout<<ele<<" ";
        }
        pair<int,char>p;
        p.first=3;
        p.second='h';
        cout<<endl<<p.first;



    return 0;
}