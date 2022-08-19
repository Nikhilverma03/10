//6. Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>
int factorial(int);
int factorial(int f)
{
    int i,res=1;
    for(i=1;i<=f;i++)
        res=res*i;
    return res;
}
int main()
{
    int n,fact;
    printf("Enter any number: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is: %d",n,fact);
    return 0;
}
