#include <stdio.h>
int main()
{
    int n,sum =0,rem;
    printf("enter a number :");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(rem%2==0)
        sum=sum+rem;

        n=n/10;
    }
    printf("sum of even digits : %d",sum);
    return 0;
}