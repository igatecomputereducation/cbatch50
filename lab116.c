#include<stdio.h>
int main()
{
	int n,x,count;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	printf("Find what?");
	scanf("%i",&x);
	
	for(count=0;n!=0;n=n/10)
	{
		if(n%10==x)
			count=count+1;
	}
	
	
	if(count==0)
		printf("No existed");
	else
		printf("%i times existed",count);
		
	return 0;
}
