#include<stdio.h>
#include<stdlib.h>
void display()
{
    //  printf(" yes memory allocate : \n");
     int *ptr;
     //ptr=malloc(sizeof(int)*50000000000); returning null value 
     ptr=malloc(sizeof(int)*50000 );
     printf("  yes memory allocate : \n");
    //  for(int i=0;i<10;i++)
    //  {
    //     printf(" enter thr number");
    //     scanf("%d",ptr+i);
    //  }
    //  for(int i=0;i<10;i++)
    //  {
    //     printf("%d ",*(ptr+i));
    //  }
    printf("%d ",*ptr);// print garbage value 
    // malloc store garbage value and take only
    // one arguement ;


}
void print()
{
    int *ptr;
    ptr=calloc(50000 ,sizeof(int));
    printf(" calloc is printd value : ");
    printf("%d",*ptr);
}
int main()
{  for(int i=1;i<100;i++)
{
    display();
    display();
}
printf("\n \n \n \n ");
print();
     
    return 0;
}