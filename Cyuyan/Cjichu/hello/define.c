#include <stdio.h>
 
#define LENGTH 10   
#define WIDTH  5
#define ADDV '\v'
#define NEWLINE '\n' 
#define NEWCHAR 'n' 
int main()
{
	int area;

	area = LENGTH * WIDTH;
	printf("value of area : %d", area);
	printf("%c", ADDV);
	printf("%c", NEWLINE);
	printf("%c", NEWCHAR);
	printf("%c", ADDV);
	
	return 0;
}
