//9. Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>
int number(int,int);
int number(int n,int d)
{
    int rem;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        if(rem==d)
            break;
    }
    if(rem!=d)
        return 0;
    else
        return 1;
}
int main()
{
    int num,digit,result;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter any digit present in number: ");
    scanf("%d",&digit);
    result=number(num,digit);
    if(result)
        printf("%d is present in %d",digit,num);
    else
        printf("%d is not present in %d",digit,num);
    return 0;
}
