#include <stdio.h>

int main() {
    // Write C code here
    int i,j,k;
    

    for (i=1;i<=5;i++)
        {
            for (j=1;j<=5-i;j++){
                printf(" ");
            }
            for (k=1;k<=i;k++)
                printf("%c" ,64+k) ;
        
            printf("\n");
        }
            return 0;
}
