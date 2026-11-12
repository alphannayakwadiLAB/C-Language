#include <stdio.h>

int main(void)
{
      int i, j;
      int rows = 5;
      
      for (i = 1; i <= rows - i; j++)
      {
      
      for (j = 1; j <= rows - i; j++)
      {
            printf(" ");
      }
      
      for (j = 1; j<= i; j++)
      {
            printf("* ");
      }
      
      printf("\n");
      
      }
      
      return 0;
}      
      
      
      
                  
