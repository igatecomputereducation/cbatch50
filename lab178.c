#include<stdio.h>
int main()
{
	int a[50][50],n,m,i,j,sum;
	
	printf("Enter the dimension of matrix\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&a[i][j]);
	}

	printf("Sum of each row..\n");
	for(i=0;i<n;i++)
	{
		for(sum=0,j=0;j<m;j++)
			sum=sum+a[i][j];
		printf("%i\n",sum);
	}
	
	return 0;
}


