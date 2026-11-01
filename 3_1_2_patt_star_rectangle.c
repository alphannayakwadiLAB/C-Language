#include <stdio.h>

int main(void)
{
       nt i, j;
       int rows = 4;
       int columns = 6;
       
       for (i = 1; i <= rows; i++)
       {
           for (j = 1; j <= columns; j++)
           {
                printf("* ");
           }
           
           printf("\n");
       }
       
       return 0;
       
}               
