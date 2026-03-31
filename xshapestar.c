#include <stdio.h>
int main()
{
    int n,a;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            a= n/2 +1;
            if(i==j||(i+j)==n+1){
            printf("* ");
            }
            else{
            printf("  ");
            }
        }
        printf("\n");
    }return 0;
}