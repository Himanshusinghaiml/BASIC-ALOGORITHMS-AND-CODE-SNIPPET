// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
#include<stdio.h>
// int main()
// {   int matrix[3][3]={{1,1,1},{1,1,1},{1,2,4}};
//     int n=3; int sum=0;
//     for(int i=0;i<n;i++)
//         {
//            sum+=matrix[i][i];
//         }
//          int sum1=0;
//     for(int i=n-1;i>=0;i--)
//         {
//             sum1+=matrix[2][2];cout<<sum1<<" ";
//         }
//         //  cout<<sum1;
//     return 0;

// }

// deltax exam

// int main()
// {
//     int x=97;
//     int y=sizeof(x);
//     printf("%d",x);
//     printf("\n");
//     for(int i=0;i<-5;i--)
//     {
//         printf("*");
//     }
    
//     return 0;
// }
int main()
{
    switch(20%13/2)
    {
        case 0:
        printf("bvdfj");
        case 1:
        printf("1");
        case 2:
        printf("2");
        default:
        printf("default case ");
       
    }
    int x=20%13/2;
    printf("%d \n",x);  
    char arr[]="deltax";
    printf("%s \n",arr+3);
    // int var1=10;   
    // {
    //     int var2=20;
    //     printf("%d %d",var1,var2);
    // }
    // printf("%d ,%d",var1,var2);    // compile error
    // int x1=10;
    int y=10.0;
    if(2==y)printf("equal"); else printf("not equal ");
    printf("\n");
    int a,b;
    a=2;
    b = ++a * ++a;
    printf("%d  %d ",a,b); 
    a=2;
    b=a++ * ++a;  printf("%d  %d",a,b);
    
     return 0;
}