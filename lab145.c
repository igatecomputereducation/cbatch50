#include<stdio.h>
int main()
{
	char i,j;
	int s;
	for(j='F';j>='A';j--)
	{
		for(i='A';i<=j;i++)
			printf("%5c",i);
		for(s=1;s<=2*('F'-j)-1;s++)
			printf("     ");
		for(i=j;i>='A';i--)
		{
			if(i!='F')
				printf("%5c",i);
		}
		printf("\n\n");
	}
	return 0;
}
