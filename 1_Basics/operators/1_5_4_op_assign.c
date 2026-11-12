#include <stdio.h>

int main(void)
{
       int a;
       
       a = 10;
       printf("Simple Assignment ( = )  = %d\n", a);
       
       a +=5;
       printf("Addition Assignment ( += )  = %d\n", a);
       
       a -=3;
       printf("Substraction Assignment ( -= )  = %d\n", a);
       
       a *= 2;
       printf("Multiplication Assignment ( *= )  = %d\n", a);
       
       a /= 4;
       printf("Division Assignment ( /= )  = %d\n", a);
       
       a %= 3;
       printf("Modulus Assignment ( %= )  = %d\n", a);
       
       return 0;
 }      
