#include <stdio.h>

int main() {
    // Write C code here
    int i ,n ,fact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
    fact=fact*i;
    }
    printf("Sum = %d",fact);

    return 0;
}
