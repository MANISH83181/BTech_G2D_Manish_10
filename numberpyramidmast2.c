#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int nsp =1;
    int m= n-1;
    for(int f=1;f<=2*n-1;f++)
    {
        printf("%d",f);
    
    }printf("\n");
    for(int i=1;i<=n;i++)
    { int a=1;
    for(int j=1;j<=m;j++)
    {
        printf("%d",a);
        a++;
    }
    for(int k=1;k<=nsp;k++)
    {
        printf(" ");
        a++;
    }
    for(int l=1;l<=m;l++)
    {
        printf("%d",a);
        a++;
    }
    m--;
    nsp=nsp+2;
    printf("\n");
}
    return 0;
    }
