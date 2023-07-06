#include<stdio.h>
int main()
{
	int i,j,t;
	
	t=1;
	for(j=1;j<=5;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("%5i",t);
			t++;
		}
		printf("\n\n");
	}
	
	return 0;
}
