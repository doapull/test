#include <stdio.h>

int main( )
{
    char str[10];
    

    printf( "Enter a value :");
    fgets(str,11,stdin);

    printf( "\nYou entered: \n");
    fputs(str,stdout);
    return 0;
}
