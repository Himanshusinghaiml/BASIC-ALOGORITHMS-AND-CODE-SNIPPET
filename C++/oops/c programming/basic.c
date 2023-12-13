#include<stdio.h>
void range()
{
  unsigned short int d=65538;// warning but output 2;
  short s=32768;// 0 to 32676 ohk but print negative value 
  printf(" the output of s: %d ",s);
  printf("%d \n",d);
}
  void range1()
  {
     short int x=-3; // print same value bcoz format specifier %d// but we use %u for unsigned 
     printf("\n");
     
     printf(" the value of x %d  :",x);
      printf(" \n the value of unsigned of x :%u",x);
  }
  void sort()
  {
     short int x=-1;
     printf(" \n%u",x);

  }
int main()
{
  unsigned short int a=65535;// this is ohk for unsigned 0-to 65535
  unsigned short int b=65536;// gives warning but output=0  yes 
  printf("%d \n",a);
  printf("%d  ",b);
  range();
  range1();
  sort();
    return 0;
}  // this is a code snippet often asked in  technical interview 