#include<stdio.h>
int main()
{
	int a[50],i,n;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("The given elements are..\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
	
	return 0;
}
