// pointers and array
// for 1 d array 
#include<stdio.h>
int main (){
	int*ptr;
	int i,j;
printf("enter the size of a array ");
scanf("%d",&j);
int mat[j];
printf("enter the element of array");
for(i=0;i<j;i++)
{
	scanf("%d",&mat[i]);
	}
for(i=0;i<j;i++)
{
	ptr=&mat[i];
	ptr++;
	
}
for(i=0;i<j;i++)
{
	printf("%d",(*ptr));
	
}
 return 0;
}
