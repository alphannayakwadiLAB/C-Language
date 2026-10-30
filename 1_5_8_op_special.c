#include <stdio.h>

struct student
{
        int roll;
        float marks;
 };
 
 int main(void)
 {
        int a =10;
        int arr[3] = {10, 20, 30};
        
        int *ptr = &a;
        
        struct Student s = {1, 85, 5};
        struct Student *sptr = &s;
        
        // 1. sizeof operator
        printf("size of a = %zu bytes\n", sizeof(a));
        
        // 2. Address-of operator
        printf("Address of a = %p\n",  (void *)&a);
        
        // 3. Deference operator
        printf("value of a = %d\n", *ptr);
        
        // 4. Structure member operator
        printf("Student Roll = %d\n", s.roll);
        printf("Student Marks = %.2f\n", s.marks);
        
        // 5. Structure pointer operator
        printf("Roll using pointer = %d\n", sptr->roll);
        
        // 6. Array subscript operator
        printf("Array element = %d\n", arr[1]);
        
        // 7. Comma operator
        int x = (a = 20, a + 5);
        printf("Comma operator result = %d\n", x);
        
        return 0;
 
 }       
        
               
