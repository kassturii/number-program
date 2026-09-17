#include <stdio.h>

int main() {
    // Write C code here
    int a ,b ,c,ch ;
    printf("** CALCULATAR.**");
   
            printf("\n 1 ADD\n 2 subtraction \n 3 multiplication \n 4 divide:");
            scanf("%d",& ch);
            switch(ch)
                {
                    
                    case 1:
                    printf("\nEnter  the number: ");
                        scanf("%d %d",&a ,&b);
                    c= (a+b);
                    printf(" \n ADDITION : %d",c);
                    break;
                    case 2:
                    printf("\nEnter  the number: ");
                        scanf("%d %d",&a ,&b);
                    c=( a-b);
                    printf(" \n SUBTRACTION : %d",c);
                    break;
                    case 3:
                    printf("\nEnter  the number: ");
                        scanf("%d %d",&a ,&b);
                    c=( a*b);
                    printf(" \n MULTIPLICATION : %d",c);
                    break;
                    case 4:
                    printf("\nEnter  the number: ");
                        scanf("%d %d",&a ,&b);
                    c= (a/b);
                    printf(" \n ADDITION : %d",c);
                    break;
                    default:
                    printf(" please enter within the case:");
                }
        

    return 0;
}
