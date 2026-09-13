#include <stdio.h>

int main() {
    // Write C code here
    int i ,j,n,temp;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    for (i =1;i<=n;i++)
        {
            for (temp =1;temp <= n-i;temp ++){
                printf(" ");
            }
            for(j=1;j<=i;j++){
                printf("%C",64+j);
            }
        
    printf("\n");
        }

    return 0;
}
