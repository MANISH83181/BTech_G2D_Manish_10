#include <stdio.h>
int main()
{
    int n,product=1;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        product=product*i;
        printf("factorial of first n numbers is  : %d \n",product);
        
    }
    
    return 0;
}