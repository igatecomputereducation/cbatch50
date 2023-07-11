#include<stdio.h>
int main()
{
	int a[50],i,n,sum;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(sum=0,i=0;i<n;i++)
		sum=sum+a[i];
	
	printf("Sum of all the elements %i",sum);
	return 0;
}
