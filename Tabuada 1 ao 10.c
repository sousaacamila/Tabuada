#include <stdio.h>
 
 int main(void)
 {
    int x, y;
    for (x = 1; x <= 10; x = x + 1)
   {
      for (y = 1; y <= 10; y = y + 1)
        printf("%i x %i = %i\n", y, x, x * y);
         printf("\n");
   }
    return 0;
 }
