#include <stdio.h>

int main( )
{
    char str[5];

    printf( "Enter a value :");
    scanf( "%s" ,str);

    printf( "\nYou entered: \n");
    printf( "%s",str );
    return 0;
}
