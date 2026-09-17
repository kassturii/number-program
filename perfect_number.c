#include <stdio.h>

int main() {
    // Write C code here
    int  sum = 0 ,n,i;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
     printf("% d is a perfect number",n);
    else
    printf ("%d is not a perfect number",n);
        

    return 0;
}
