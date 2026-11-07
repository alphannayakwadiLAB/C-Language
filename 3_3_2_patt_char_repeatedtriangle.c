#include <stdio.h>

int main()
{
       int i, j;
       
       for(i = 5; i <= 5; i++)
       {
             for(j = 5; j >= i; j++)
             {
                   printf("%c ", 'A' + i - 1);
             }
             
             printf("\n");
             
      }
      
      return 0;
}          
