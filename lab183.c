#include<stdio.h>
int main()
{
	int a[50][50],i,j,n;
	
	printf("Enter the dimension of square matrix:");
	scanf("%i",&n);
	
	printf("Enter the matrix..\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%i",&a[i][j]);
	}
	
	printf("Diagonal elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				printf("%5i",a[i][j]);
			else
				printf("     ");
		}
		printf("\n\n");
	}
	
	printf("Reverse diagonal elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==n-j-1)
				printf("%5i",a[i][j]);
			else
				printf("     ");
		}
		printf("\n\n");
	}
	
	printf("Lower diagonal elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
				printf("%5i",a[i][j]);
			else
				printf("     ");
		}
		printf("\n\n");
	}
	
	printf("Upper diagonal elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
				printf("%5i",a[i][j]);
			else
				printf("     ");
		}
		printf("\n\n");
	}
	return 0;
}



