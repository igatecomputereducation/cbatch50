#include<stdio.h>
int main()
{
	int a[50],i,n,x,r;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Find what:");
	scanf("%i",&x);
	
	printf("Replace with what:");
	scanf("%i",&r);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
			a[i]=r;
	}
	
	printf("Result array\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
	return 0;
}




