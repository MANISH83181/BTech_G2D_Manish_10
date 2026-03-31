#include <stdio.h>
#include <math.h>
int main()
{
   int sum;int count;
   int rem; int temp;
   for(int i=1;i<=10000;i++){
    temp=i;
    sum=0;
    count=0;
    while(temp>0){
        count++;
        temp=temp/10;
    }
    temp=i;
    while(temp>0){
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp=temp/10;
    }
    if(sum==i)
    printf("%d\n",i);
   }return 0;
   }

