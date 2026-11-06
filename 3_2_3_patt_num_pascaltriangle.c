#include <stdio.h>

int main()
{
      int i, j, rows;
      int num;
      
      printf("Enter number of rows: ");
      scanf("%d", &rows);
      
      for(i = 0; i < rows; i++)
      {
            for(j = 0; j < rows - i - 1; j++)
            {
                  printf(" ");
            }
            
            num = 1;
            
            for(j = 0; j <= i; j++)
            {
                  printf("%4d", num);
                  
                  num = num * (i - j) / (j + 1);
            }
            
            printf('\n");
            
          }
          
          return 0;
}                 
                 
