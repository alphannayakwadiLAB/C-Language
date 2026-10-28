#include <stdio.h>

int main()
{
    
    register int number = 10;

    printf("Number = %d\n", number);
    
    number++;
    
    printf("Updated Number = %d\n", number);
    
    return 0;
}
