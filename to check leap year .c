#include <stdio.h>

int main() {
    int year ;
    
    printf("\nEnter any year: ");
    scanf("%d", &year);
    
   if((year%4==0)&&(year%100!=0||year %400==0))
       printf("is leap year ");
else ("not a leap year ");
}
