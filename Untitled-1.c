#include<stdio.h>
int main()
{
    int num;
    printf("Enter a numberr to check whether it is negative or positive\n");
    scanf("%d",&num);
    if(num==0)
    {
        printf("%d is neutral number",num);
    }
    else if(num<0)
    {
        printf("%d is negative number",num);
    }
    else
    {
        printf("%d is positive number",num);
    }
    return 0;
}