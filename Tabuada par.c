#include <stdio.h>
 
 int main(void)
 {
    int x, y;
    for (x = 2; x <= 10; x = x + 2)
   {
      for (y = 1; y <= 10; y = y + 1)
        printf("%i x %i = %i\n", y, x, x * y);
         printf("\n");
   }
    return 0;
 }
