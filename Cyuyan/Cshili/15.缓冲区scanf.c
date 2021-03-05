//缓冲区演示

	//scanf("%*[^\n]");
	//scanf("%*c");
	//上面这两条语句可以把用户通过sacnf输入的所有内容从缓存区删除

#include<stdio.h>

int main()
{
	int num1=0,num2=0;
	printf("请输入一个数字：");
	scanf("%d",&num1);
	printf("num1是%d\n",num1);

	
	scanf("%*[^\n]");
	scanf("%*c");
	printf("清除缓存区后num1是%d\n",num1);

	printf("请输入两个数字：");
	scanf("%d%d",&num1,&num2);
	printf("num1是%d，num2是%d\n",num1,num2);


	return 0;
}
