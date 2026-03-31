#include <stdio.h>
int main()
{
    int n,sum=1,a,b=1;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=(n-2);i++){
        sum=a+b;
        a=b;
        b=sum;
        
        
        
    }
    printf(" The %d fibonacci is %d ",n,sum);
    return 0;
}