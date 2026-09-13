#include <stdio.h>

int main() {
    // Write C code here
    int n,num ,sum=0;
    float average ;
   
    printf("Enter the number of AVERAGE:");
    scanf("%d",&n);
    
     for(int i=1;i<=n;i++){
        printf("Enter the number :");
        scanf("%d",&num);
        sum=sum+num;
        
     }
    average=(float)sum/n;
    printf("Average=%f",average);
    
    return 0;
}
