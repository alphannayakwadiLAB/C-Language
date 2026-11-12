#include <stdio.h>

int main(void)
{
       int age = 20;
       int a = 25;
       int b = 40;
       int number = 7;
       int marks = 75;
       
       /* 1. Simple conditional operator */
       printf("Age status: %s\n",(age >= 18) ? "Adult" : "Minor");
       
       /* 2. Find the larger number */
       printf("Larger Number: %d\n",(a > b) ? a : b);
       
       /* 3. Chech even or odd */
       printf("Age status: %s\n",(number % 2 == 0) ? "Even" : "Odd");
       
       /* 4. Pass or fail */
       printf("Result: %s\n",(marks >= 40) ? "Pass" : "Fail");
       
       /* 5. Nested conditional operator */
       printf("Grade: %c\n",
                    (marks >= 90) ? 'A':
                    (marks >= 75) ? 'B':
                    (marks >= 60) ? 'C':
                    (marks >= 40) ? 'D': 'F');
                    
        return 0;
        
}        
        
                  


