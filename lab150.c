#include<stdio.h>
int main()
{
	int rev,n,t,limit;
	printf("Enter the limit:");
	scanf("%i",&limit);
	for(n=1;n<=limit;n++)
	{
		t=n;
		for(rev=0;t!=0;t=t/10)
			rev=rev*10+t%10;
		if(n==rev)
			printf("%i\n",n);
	}
	return 0;
}
