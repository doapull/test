#include <stdio.h>

#if !defined (MESSAGE)
//上面的形式等同于 #ifndef (MESSAGE)
	#define MESSAGE "You wish!"
#endif

int main(void)
{
   printf("Here is the message: %s\n", MESSAGE);  
   return 0;
}
