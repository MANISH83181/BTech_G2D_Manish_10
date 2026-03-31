#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            char ch = (char)a;
            printf("%c",ch);
            a++;

        }
        printf("\n");
    }return 0;
}