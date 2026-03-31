#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers :" );
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("a=%d is the greatest ",a);
    if(b>a&&b>c)
    printf("b=%d is the greatest ",b);
    if(c>a&&c>b)
     printf("c=%d is the greatest ",c);
return 0;
}

   
