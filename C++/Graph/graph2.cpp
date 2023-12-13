#include<iostream>
using namespace std;
int main()
{
  int arr[4][4]={{0,1,1,0},{1,0,0,1},{1,0,0,1},{0,1,1,0}};
  for(int i=0;i<4;i++)
  {  
    for(int j=0;j<4;j++)
      {
     cout<<arr[i][j]<<" ";
      }

    cout<<endl;
  }

    return 0;
}