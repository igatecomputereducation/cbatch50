#include<stdio.h>
int main()
{
	int a,b,c;
	a=40<80 || 20<=30 && 60!=20;
	b=60!=60 && 40<80 || 30>20;
	c=10==10 && 10==15;
	printf("%i\n%i\n%i",a,b,c);
	return 0;
}

