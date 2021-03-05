#include<stdio.h>
#include<stdlib.h>

/*int main(int argc,char *argv[])
{
	int i;
	int min;
	min = *argv[1];
	printf("%d\n\n",min);
	for(i=1;i < argc-1;i++)
	{
		min = (*argv[i+1] < min) ? *argv[i+1] : min;
		printf("%d\n",min);
	}

	printf("最小数是%d\n",min);

	return 0;
}*/

int main()
{	
	char num[100];
	printf("请输入要比较的数字：");
	scanf("%s",num[]);
	printf("%s\n",num[1]);
	printf("%d\n",num);

	return 0;
}
