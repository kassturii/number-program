#include <stdio.h>

int main() {
    // Write C code here
    int num;
        int temp  ;
        int r;
        int sum=0;
        printf("Enter the number:");
    scanf("%d",&num);
        temp=num;
        while(num>0)
        {
            r=num%10;
            num=num/10;
            sum=sum+(r*r*r*r);
        }
        if (temp==sum)
       printf("is an armstrong number!");
        else
       printf("is not an armstrong number!");
        
    
return 0;

}
