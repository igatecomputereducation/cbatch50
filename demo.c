#include<stdio.h>
int main()
{
	int x=20;
	switch(x+10)
	{
		case 20:
			printf("one\n");
			break;
		case 30:
			printf("two\n");
			break;
		case 50:
			printf("three\n");
			break;
		default:
			printf("four");
	}
	return 0;
}

