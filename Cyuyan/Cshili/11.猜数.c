#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int num = 0,num1 = rand() % 100;
	int guess = 1;
	int i=1;
	for (i=1;i<=5;i++)
	{
		printf("请输入一个数字:");
		scanf("%d",&guess);
		if(guess>num)
		{
			printf("猜大了\n");
		}
		else if(guess<num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
/*	while(sign){
	printf("请输0～99的数字作为你的答案：");
	scanf("%d",&num);
	if(num != num1){
		printf("很遗憾你猜错了\n");
	}else{
		printf("恭喜你猜对了\n");
		sign = 0;
		}
	}
*/	
	printf("猜错5次，请重新尝试\n");
	return 0;
}
