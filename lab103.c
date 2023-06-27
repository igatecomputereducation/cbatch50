#include<stdio.h>
int main()
{
	int i,n,es,os;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	for(es=0,os=0,i=1;i<=n;i++)
	{
		if(i%2==0)
			es=es+i;
		else
			os=os+i;
	}
	
	printf("Even numbers sum %i\n",es);
	printf("Odd numbers sum %i",os);
	return 0;
}
