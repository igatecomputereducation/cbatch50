#include<stdio.h>
int main()
{
	int a[50],i,n,k,temp;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter the elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(k=0;k<n-1;k++)
	{
		for(i=k+1;i<n;i++)
		{
			if(a[i]<a[k])
			{
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}
		}
	}
	
	printf("Elements in ascending order\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);

	return 0;
}
