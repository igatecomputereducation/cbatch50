#include<stdio.h>
int main()
{
	int a[50][50],n,m,i,j;
	
	printf("Enter the dimension of matrix\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&a[i][j]);
	}

	printf("Rows in reverse order\n");
	for(i=0;i<n;i++)
	{	
		for(j=m-1;j>=0;j--)
			printf("%5i",a[i][j]);
		printf("\n\n");
	}
	
	return 0;
}


