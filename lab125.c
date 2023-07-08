#include<stdio.h>
int main()
{
	int n,i,f;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(f=1,i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f=0;
			break;
		}
	}
	if(f && n>1)
		printf("Prime number");
	else
		printf("Not a prime number");
	
	return 0;
}
