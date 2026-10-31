#include <stdio.h>

int main(void)
{
      int i = 1;
      
      start:
      
      if (i <= 5)
      {
         printf("%d\n", i);
         i++:
         
          goto start;
          
      }
      
      return 0;
      
}          
          
         
