#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int nsp =1;
    int m= n-1;
    for(int l=1;l<=2*n-1;l++)
    {
        printf("*");
    
    }printf("\n");
    for(int k=1;k<=n;k++)
    {
    for(int i=1;i<=m;i++)
    {
        printf("*");
    }
    for(int j=1;j<=nsp;j++)
    {
        printf(" ");
    }
    for(int k=1;k<=m;k++)
    {
        printf("*");
    }
    m--;
    nsp=nsp+2;
    printf("\n");
}
    
    return 0;
    }
