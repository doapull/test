#include<stdio.h>

int main()
{
	int num1=0,num2=0;
	for (num1=1;num1<=5;num1++)
	{
		for(num2=5;num2>=num1;num2--)
		{
			printf("%d",num2);
		}
		printf("\n");
	}

	return 0;
}
