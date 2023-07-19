#include<stdio.h>
int main()
{
	int a[50][50],n,i,j,trace;
	
	printf("Enter the dimension of square matrix:");
	scanf("%i",&n);
	
	printf("Enter the matrix..\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%i",&a[i][j]);
	}
	
	printf("Diagonal elements..\n");
	trace=0;
	for(i=0;i<n;i++)
	{
		printf("%5i",a[i][i]);
		trace=trace+a[i][i];
	}
	
	printf("\nTrace of the matrix %i",trace);
	return 0;
}


