#include <stdio.h>

int main()
{
   int character = 65;
   int finish = 90;

   for (; character <= finish; character++)
   {
      printf("ASCII charater = %c, value = %d\n", character, character);
   }

   return 0;
}
