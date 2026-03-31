#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if((i==1&&j<=n) || (i==n-2&&j<=n) ||(j==1&&i<=n-2) ||(j==n&&i<n-2))
           printf("* ");
           else
           printf("  ");

        }
        printf("\n");
    }return 0;
}