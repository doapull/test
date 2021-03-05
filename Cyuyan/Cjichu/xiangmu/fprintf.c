#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
 
   fp = fopen("myfile.txt", "a+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}

