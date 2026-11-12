#Include <stdio.h>

int main(void)
{
       int i, j;
       int rows = 5;
       
       //upper half of diamond 
       for (i = 1; i <= rows; i++)
       {
              for (j = 1; j <= rows - i; j++)
              {
                   printf(" ");
              }    
               
              for (j = 1; j <= (2 * i - 1); j++)
              {
                   printf("*");
              }  
              
              printf("\n");
        }   
        
        //lower half of diamond 
       for (i = rows - 1; i >= 1; i--)
       {
              for (j = 1; j <= rows - i; j++)
              {
                   printf(" ");
              }    
               
              for (j = 1; j <= (2 * i - 1); i++)
              {
                   printf("*");
              }  
              
              printf("\n");
        }   
        
        return 0;

}
