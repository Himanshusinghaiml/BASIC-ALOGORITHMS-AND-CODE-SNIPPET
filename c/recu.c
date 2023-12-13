#include  <stdio.h>
int calc(int n);  
int count(int x);
 
int main ()
{
  int n ;
  printf("Enter number of stairs : ");
  scanf("%d", &n);
  printf("Number of ways = %d", count(n));
  getchar();
  return 0;
}
int count(int x)
{
	return calc(x + 1);
}
int calc(int n)
{
   if (n <= 1)
  	return n;
   return calc(n-1) + calc(n-2);
}