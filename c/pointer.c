#include<stdio.h>
void c()
{
    int a=-5;
    int ans=(a++,++a);
    printf("  this is ans of increment : %d",ans);
}
int main()
{  
    int a=5;
    int *w;
    w=&a;
    printf("%d",*w);
    printf("\n");
    c();
}