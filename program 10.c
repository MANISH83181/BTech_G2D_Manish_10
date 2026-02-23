#include <stdio.h>

int main() {
    float avg;
   float sub1,sub2,sub3,sub4,sub5;
   printf("enter 5 subject marks :\n");
   scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
avg=(sub1+sub2+sub3+sub4+sub5)/5;
if(avg>=90)
{
    printf("grade A");
}
else if(avg>=80)
{
    printf("grade B");
}
else if(avg>=60)
{
    printf("grade B");
}
else
{
    printf("grade D");
}
    return 0;
}
