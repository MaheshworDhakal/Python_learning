#include<stdio.h>
#include<math.h>
int fib(int n);
int main ()
{
	int n;
	printf("enter the number of term \n");
	scanf("%d",&n);
	fib(n);
	printf("the series is %d^3\t+",fib(n));
	return 0; 
}
fib(int n)
{
while(n!=1){

{
	if(n==1)
	{return 2;
	
	}
	else
	{
		return (2 +fib(n-1));
	}
	n--;
	}
	
}
}
