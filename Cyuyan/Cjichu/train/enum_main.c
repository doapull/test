#include<stdio.h>

enum {
    MON=0,TUE,WED=5,THU,FRI,SAT,SUN
} day;

int main()
{
    for(day=0;day<SUN;day++);
    {
        printf("枚举元素：%d \n",day);   /*实际上输出的是day这个变量的值，并不是所定义的枚举元素*/
    }
}
