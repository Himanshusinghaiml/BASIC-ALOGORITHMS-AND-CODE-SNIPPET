#include<stdio.h>
int main()
{    char a=129;
     char x=258; // output 2
     char c=336;
     char x3=-129;
     printf("\n the value of char -  is : %d",x3);// print 127 
     char p=-1;
     printf(" \n%d",a);
     printf("\n%c",a);
     printf("\n %d",x);
     printf("\n %c",x);
     printf(" \n%d and character value : %c",c,c);
     printf("\n the value of p : %d and char value : %c",p,p);
     printf("%c  why this is not print ",c);// character system does print in negative value 
    return 0;
}