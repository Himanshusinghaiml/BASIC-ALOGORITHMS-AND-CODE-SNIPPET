 #include<iostream>
 using namespace std;
//  int main()
 
//  {    int a=5;
//      int&b=a;
//      a=10;
//      cout<<a<<" "<<b;
     
//     return 0;
//  }
void print(int arr[],int &cnt,int &b)
{
     for(int i=0;i<5;i++)
     {
        cnt++;
     }
     arr[0]=10;
     b=90;
    //  return cnt;
}
int main()
{   int arr[5]={1,2,3,4,5}; 
    int cnt=0; int b=5;
    print(arr,cnt,b);
    cout<<cnt<<endl<<arr[0]<<endl<<b;
    return 0;
}