#include <stdio.h>
 
int main()
{
   int  i = 0;
   char a = 'a'; /* ascii 值是 97 */
   char b = 'b'; /* ascii 值是 98 */
   char c = 'c'; /* ascii 值是 99 */
   int sum_1;
   int sum_2;
   int sum_3;

   sum_1 = i + a;
   sum_2 = i + b;
   sum_3 = i + c;
   
   printf("Value of sum_1 : %d\n", sum_1 );
   printf("Value of sum_2 : %d\n", sum_2 );
   printf("Value of sum_3 : %d\n", sum_3 );
 
}

