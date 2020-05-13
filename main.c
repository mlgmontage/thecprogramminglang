#include <stdio.h>

int main()
{
   char thread[30];

   for (int i = 0; i < 30; i++)
   {
      thread[i] = 'a';
   }

   for (int i = 0; i < 30; i++)
   {
      printf("%p -> %c\n", thread + i, *(thread + i));
   }

   return 0;
}
