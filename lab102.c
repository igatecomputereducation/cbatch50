#include<stdio.h>
int main()
{
	int n,i,fact;
	
	printf("Enter natural number:");
	scanf("%i",&n);
	
	for(fact=1,i=1;i<=n;i++)
		fact=fact*i;
	
	printf("Factorial %i",fact);
	return 0;
}
