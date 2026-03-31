#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    
    int p=1;int nsp =n-1;
    for(int i=1;i<=n;i++) 
    {
        int a=65;
        
        for(int k=1;k<=nsp;k++)
        {
            printf("  ");
        }
        nsp--;
        for(int j=1;j<=p;j++){
            char ch =(char)a;
            printf("%c ",ch);
           a++;
        }
         p=p+2;;
        printf("\n");
    }return 0;
}