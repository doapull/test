#include <stdio.h>

int main()
{
	char a='A',b='B',c;
 	c=a+b;
 	printf ( " the size of the result of a :%d \n" ,sizeof(a) );
 	printf ( " the size of the result of b :%d \n" ,sizeof(b) );
 	printf ( " the size of the result of a+b :%d \n" ,sizeof(a+b) );
 	printf ( " the size of the result of a++ :%d \n" ,sizeof(a++) );
 	printf ( " the size of the result of c :%d \n" ,sizeof(c) );
 	printf ( " the size of the result of a+c :%d \n" ,sizeof(a+c) );
}
