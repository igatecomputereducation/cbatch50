#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50];
	int n,m,p,q,i,j,k,sum;
	
	printf("Enter the dimension of 1st matrix\n");
	scanf("%i%i",&n,&m);
	
	printf("enter the dimension of 2nd matrix\n");
	scanf("%i%i",&p,&q);
	
	if(m==p)
	{
		printf("Enter %ix%i matrix\n",n,m);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				scanf("%i",&a[i][j]);
		}
		
		printf("Enter %ix%i matrix\n",p,q);
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
				scanf("%i",&b[i][j]);
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<q;j++)
			{
				for(sum=0,k=0;k<m;k++)
					sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		}
		
		printf("Product of 2 matrices\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<q;j++)
				printf("%5i",c[i][j]);
			printf("\n\n");
		}
		
	}
	else
		printf("Can't multiply");
	
	return 0;
}







