#include<stdio.h>
int main()
{
	int n,x,res,fact,i;
	float sum;
	
	printf("How many terms?");
	scanf("%i",&n);
	
	sum=0;
	for(x=1;x<=n;x++)
	{
		for(fact=1,i=1;i<=x;i++)
			fact=fact*i;
			
		for(res=1,i=1;i<=x;i++)
			res=res*x;
			
		sum=sum+(float)fact/res;
	}
	
	printf("Result of series %f",sum);
	return 0;
}

