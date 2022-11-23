#include <stdio.h>

int main()
{
    int year;
    printf("Enter a leap year = ");
    scanf("%d",&year);
    if(year%4==0)
       if(year%100==0)
          if(year%400==0)
             printf("true");
          else
            printf("false");
        else
          printf("true");
    else
      printf("false");
    return 0;
}
