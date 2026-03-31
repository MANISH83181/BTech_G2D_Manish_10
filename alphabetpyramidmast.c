#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int a=65;
        
        for(int j=1;j<=(n-i);j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            char ch =(char)a;
            printf("%c ",ch);
           a++;
        }
        int p=i-1;
       for(int q=1;q<=(i-1);q++){
        char ch =(char)(64+p);
        printf("%c ",ch);
          p--;
       }
        printf("\n");
    }return 0;
}