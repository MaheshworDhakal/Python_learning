#include<stdio.h>
//declaring the structure 
struct data {
	int number ;
	
	int num;
};
int main ()
{//declaring the variable in the structure 
	struct data s1;
	printf("enter the value of number and num ");
	scanf("%d%d",&s1.number,&s1.num);
	//printing the value with the help of structure 
	printf("the number is %d and num is %d",s1.number,s1.num);
	return 0;
}
