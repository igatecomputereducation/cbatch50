#include<stdio.h>
int main()
{
	int a[50],i,n;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Elements in reverse order..\n");
	for(i=n-1;i>=0;i--)
		printf("%5i",a[i]);
	
	return 0;
}
