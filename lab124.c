#include<stdio.h>
int main()
{
	int n,x,flag;
	printf("Enter any natural number:");
	scanf("%i",&n);
	printf("Find what:");
	scanf("%i",&x);
	for(flag=0;n!=0;n=n/10)
	{
		if(n%10==x)
		{
			flag=1;
			break;
		}
	}
	if(flag)
		printf("Existed");
	else
		printf("Not existed");
	return 0;
}
