#include <stdio.h>

enum Weekday
{
     SUNDAY = 1,
     MONDAY,
     TUESDAY,
     WEDNESDAY,
     THURSDAY,
     FRIDAY,
     SATURDAY,
};

int main()
{
   enum Weekday today = WEDNESDAY;
   
   printf("Today is day: %d\n", today);
   
   return 0;
   
}        
