#include<stdio.h>
//int main(int argc,char *argv[])
int main(int argc,char **argv) //上一行可以改写成这样
{
	int num = 0;
	for (num = 0;num <=argc - 1;num++)
	{
		//printf("%s\n",argv[num]);
		printf("%s\n",*(argv+num));
	}
	return 0;
}
