//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include<stdio.h>
int no(int);
int no(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int num,result;
    printf("Enter any number: ");
    scanf("%d",&num);
    result=no(num);
    printf("%d",result);
    return 0;
}
