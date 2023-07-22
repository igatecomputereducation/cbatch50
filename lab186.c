/*
printing biggest number
version: 1.0
author: subbu
Date: 21/7/2023
*/
#include<stdio.h>
int main()
{
	//declaration of variables	
	int a,b;
	
	//accepting input from the user
	printf("Enter 2 integers..\n");
	scanf("%i%i",&a,&b);
	
	//logic of biggest number
	if(a==b)
		printf("Equals");
	else
	{
		if(a>b)
			printf("Biggest %i",a);
		else
			printf("Biggest %i",b);
	}
	
	//(a==b)?printf("Equals"):((a>b)?printf("Biggest %i",a):printf(" Biggest %i",b));
	return 0;
}





