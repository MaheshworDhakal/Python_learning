#include<stdio.h>
int fibo(int n);
int main ()
{
	int n,term ;
	printf("enter the number of term\n ");
	scanf("%d",&n);
	fibo(n);
	printf("the term of fibo series are %d",fibo(n));
	return 0;
}
 int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return (fibo(n-1)+fibo(n-2));
	}
}
