#include <stdio.h>

int number = 100;  //global variable

void display()
{
     printf("Number = %d\n", number);
     
}

int main()
{
     printf("Global Number = %d\n", number);
     
     display();
     
     return();
     
}     
