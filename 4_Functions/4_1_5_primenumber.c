#include <stdio.h>

int checkPrime(int num);

int main()
{
      int num, result;
      
      printf("Enter a number: ");
      scanf("%d", &num);
      
      result = checkPrime(num);
      
      if(result == 1)
      {
            printf("%d is a Prime Number", num);
      }
      else
      {
            printf("%d is Not a Prime Number", num)
      }
      
       return 0;
}

     int checkPrime(int num)
     {
     
          int i;
          
          if(num <= 1)
          {
               return 0;
          }
          
          for(i = 2; i <= num / i; i++)
          {
               if(num % i == 0)
               {
                    return 0;
               }
          }
          
          return 1;
}          
                                
                 
