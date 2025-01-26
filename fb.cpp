#include<stdio.h>
//fibo series where the intial terms is given by users 
 int main ()
 {
 	int a,b,n,i,next_term;
 	//asking initial terms to the user 
 	printf("enter the first term :\n");
 	scanf("%d",&a);
 	printf("enter the second term \n:");
 	scanf("%d",&b);
 	//printing the fibo series 
 	printf("enter the fibo terms :\n");
 	scanf("%d",&n);
 	printf("the fibo term are : \n %d\t%d\t",a,b);
 	// to terms are all ready printed so remaining printed 
 	for(i=3;i<=n;i++)
 	{
 		next_term=a+b;
 		a=b;
 		b=next_term;
 		printf("%d\t",next_term);
	 }
	 return 0;
 }
