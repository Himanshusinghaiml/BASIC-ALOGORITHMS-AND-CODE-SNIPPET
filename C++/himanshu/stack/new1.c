#include <stdio.h>
#include <string.h>
void size1(char s[])
{
    int count=0; int i=0;
    while ( s[i]!='\0')
    {


        count++;
        i++;
        
    }
    printf("\nthe size of string %d\n",count);
}
 
int main()
{
    char s[1000];  
    int  i,k=0;
     printf("Enter  the string : ");
    gets(s);
     
    

    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];

     	
     	if(s[i]==' '|| s[i]=='\t')
     	{
		  k++;
		  i--;
	    }
     	
    }
    printf("string after removing all blank spaces:\n");

 	 printf("%s",s);
    size1(s);
 	 
     
    return 0;
}