#include <stdio.h>

int main() {
    char ch;
printf("ENTER THE ALPHABET WHICH YOU WANT TO CHECK :");
scanf("%c",&ch);

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
    printf("alphabet is vowel");
    
}
else
{
    printf("alphabet is constant");
}

    return 0;
}
