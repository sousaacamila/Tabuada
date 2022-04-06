#include <stdio.h>
 
 int main(void)
 {
    int x, y;
    for (x = 10; x >= 1; x = x - 1)
   {
      for (y = 10; y >= 1; y = y - 1)
        printf("%i x %i = %i\n", y, x, x * y);
         printf("\n");
   }
    return 0;
 }
