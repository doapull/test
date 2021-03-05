#include "stdio.h"
 
 
int main()
{
	int x;
	fgets(x, sizeof(x), stdin);
	printf("x value : %d", x);
 
	return 0;
}
