/*
write a pogram to input m *n array and display it in matrix form using pointer 
*/
#include<stdio.h>
int main (){
	int i,j,m,n ;
	printf("plz enrter the size of matrix ");
	scanf("%d%d",&m,&n);
	int  arr[m][n];
	printf("enter the element of an array\n ");
	
	for(i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",((*arr+i)+j));
		
		}
		
	}
   printf("your array is \n");
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		printf("%d\t",*(*arr+i)+j);
   		
	   }
	   printf("\n");
   }
   return 0;
}
