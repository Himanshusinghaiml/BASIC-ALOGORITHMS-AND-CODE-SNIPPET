#include<stdlib.h>
#include<stdio.h>
enum{false,true};
int main()
{
  int i=10;
  do
  {
    /* code */
    printf("%d \n",i);i++;
    if(i<15)
     continue;
  } while( false);
   

 printf("\n");
 int arr[]={4,5,6,7};
 int *p=arr+1;
 printf("%d",*arr+9);
 printf("\n");
 int a=100,b=200 ,c=300;
 if(!a>=500)
    b=300;
 c=400;
 printf("%d %d %d ",a,b,c);
 printf("\n %d \n",!0);
  
char* px="deltax";
char cd;
for(int i=0;i<3;i++)
{
    cd = *++px;

}
  printf(" \n %c \n",cd);
   return 0;
}