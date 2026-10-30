#include <stdio.h>

int main(void)
{
    unsigned int a = 12; //Binary: 1100
    unsigned int b = 10; //Binary: 1010
    
    printf("a = %u\n", a);
    printf("b = %u\n\n", b);
    
    //Bitwise AND
    printf("a & b = %u\n", a & b);
    
    //Bitwise OR
    printf("a | b = %u\n", a | b);
    
    //Bitwise XOR
    printf("a ^ b = %u\n", a ^ b);
    
    //Bitwise NOT
    printf("~a  = %u\n", ~a);
    
    //Left Shift
    printf("a << 1 = %u\n", a << 1); 
     
    //Right Shift
    printf("a >> 1 = %u\n", a >> 1); 
    
    return 0;
    
}    
