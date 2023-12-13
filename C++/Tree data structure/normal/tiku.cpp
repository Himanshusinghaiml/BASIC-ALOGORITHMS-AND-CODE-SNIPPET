#include<iostream>
using namespace std;
 int countX(int L, int R, int X) {
        // code here
        int cnt=0; 
        // int i=10;
        
        for(int i=L+1;i<R;i++)

        {
              while(i>0)
        {

           
          int rem=i%10;
          if(rem==1)
          {
              cnt++;
          }
           
          i=i/10;
          }
        }
        return cnt;}
int main()
{   int ans=countX(10,20,1);
cout<<ans;
    // return 0;
    cout<<endl<<endl;
    int j=10;
    int k=20;
    // cout<<" jjj :";
    for(int i=j+1;i<k;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}