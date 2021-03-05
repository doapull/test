#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp=NULL;
    fp=fopen("myfile.txt","ab");
    if(fp == NULL)
    {
        printf("不能够访问该文件.\n");
        exit(1);
    }
    fputs("this is a test\n", fp);
    fclose(fp);
    fp=NULL;
    return 0;
}
