#include<stdio.h>

int main()
{
	int num = 0;
	int *p_num = &num;
	int **pp_num = &p_num; //二级指针的声明
	**pp_num = 10;
	printf("%p\n",&pp_num);
	printf("\n");
	printf("%p\n",pp_num);
	printf("%p\n",p_num);
	printf("%d\n",**pp_num);
	printf("%d\n",*p_num);
	printf("%d\n",num);
	printf("\n");
	*pp_num = NULL;
	printf("%p\n",pp_num);
	printf("%p\n",p_num);

	return 0;

}
