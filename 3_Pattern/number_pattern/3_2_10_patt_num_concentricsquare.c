#include <stdio.h>

int main()
{
       int n, i, j;
       int min;
       
       printf("Enter number: ");
       scanf("%d", &n);
       
       for(i = 0; i < 2 * n - 1; i++)
       {
           for(j = 0; j < 2 * n - 1; j++)
           {
                min = i; 
                
                if(j < min)
                    min = j;
                    
                if(2 * n - 2 - i < min)\
                   min = 2 * n - 2 - i;
                   
                if(2 * n - 2 - j < min)
                   min = 2 * n - 2 - j;
                   
                printf("%d ", n - min);
           }
           
           printf("\n");
          }                
 
       return 0;
       
}                 
       
      
