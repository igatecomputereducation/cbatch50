#include<stdio.h>
int main()
{
	int x,sum;
	printf("Enter integers and 0 to stop..\n");
	sum=0;
	while(1)
	{
		scanf("%i",&x);
		if(x==0)
			break;
		sum=sum+x;
	}	
	printf("Sum %i",sum);
	return 0;
}
