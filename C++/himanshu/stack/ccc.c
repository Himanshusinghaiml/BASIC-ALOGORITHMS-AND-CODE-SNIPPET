#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void remove_space()
{
    //Implement a C program that removes all white spaces from a given string.
    char ch[100]="this is himanshu of aiml and trying to removes all white spaces";
    int n=strlen(ch);
    printf(" \n before length \n%d",n);
    
    char s[100]; int k=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]!=' ')
        {
             s[k]=ch[i];
             k++;
        }
    }
    s[k]='\0';
    printf("\n%s",s);
    n=strlen(s);
    printf(" \n after length \n%d",n);
    
}
int main()
{
     //Write a C program to count the frequency of each character in a given string and display the result.
    char ch[20]="apple";
    int count;
    for(int i=0;ch[i]!='\0';i++)
    {     count=0;
        for(int j=0;ch[j]!='\0';j++)
        {     
            if(ch[i]==ch[j])
            {   
               count++;
            }
        }
        printf("%c- character occurence : %d\n",ch[i],count);
    }
    remove_space();
    return 0;
}