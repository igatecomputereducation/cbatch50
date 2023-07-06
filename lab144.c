#include<stdio.h>
int main()
{
	int i,j;
	for(j=5;j>=1;j--)
	{
		for(i=1;i<=j;i++)
			printf("%5i",i);
		for(i=1;i<=2*(5-j)-1;i++)
			printf("     ");
		for(i=j;i>=1;i--)
		{
			if(i!=5)
				printf("%5i",i);
		}	
		printf("\n\n");
	}
	return 0;
}
