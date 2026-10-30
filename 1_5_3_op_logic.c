#include <stdio.h>

int main(void)
{
      int age = 20;
      
      printf("Logical AND %d\n", age >= 18 && age <= 60);
      
      printf("Logical OR %d\n", age < 18 || age > 60);
       
      printf("Logical NOT %d\n", !(age >= 18 ));
      
      return 0;
}      
