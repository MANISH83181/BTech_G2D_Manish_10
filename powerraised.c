#include <stdio.h>
int main()
{
    int n,m,product=1;
    printf("enter a base number  :");
    scanf("%d",&n);
    printf("enter a  power of a number :");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        product=product*n;
        
    }
    printf("the base %d raised to the power of %d is %d ",n,m,product);
    return 0;
}