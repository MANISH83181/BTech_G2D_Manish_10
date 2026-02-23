int main() {
    int age;

    printf("Enter the age number ");
    scanf("%d", &age);
if(age<=12)
{
    printf("child");
}
    else if(age>12&&age<=18)
    {
        printf("teen");
    
    }
    else if(age>18&&age<=60)
    {
        printf("senior");
    
    }
    else
    {
        printf("senior citizen");
    
    }
    return 0;
}
