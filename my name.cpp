#include<stdio.h>
int main ()

{
	int i,j ;
	char my_name[]="maheshwor";
	for(i=0;i<9;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",my_name[j]);
			
		}
		printf("\n");
		
	}
	return 0;
}
