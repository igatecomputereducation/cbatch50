#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%i",&num);
	if(num>0)
		printf("positive\n");
	if(num<0)
		printf("negative\n");
	if(num==0)
		printf("zero");
	return 0;
}

