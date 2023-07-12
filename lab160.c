#include<stdio.h>
int main()
{
	int a[50],i,n,esum,osum;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter integers..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(esum=0,osum=0,i=0;i<n;i++)
	{
		if(a[i]%2==0)
			esum=esum+a[i];
		else
			osum=osum+a[i];
	}
	printf("sum of even elements %i\n",esum);
	printf("Sum of odd elements %i",osum);
	return 0;
}
