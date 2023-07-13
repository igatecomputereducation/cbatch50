#include<stdio.h>
int main()
{
	int a[50],b[50],i,n,flag;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements into 1st array..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	printf("Enter elements into 2nd array..\n");
	for(i=0;i<n;i++)
		scanf("%i",&b[i]);
		
	flag=1;
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			flag=0;
			break;
		}
	}
	
	if(flag)
		printf("arrays are equal");
	else
		printf("arrays are not equal");
	
	return 0;
}
