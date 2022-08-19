//5. Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>
void oddno(int);
void oddno(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",(2*i-1));
}
int main()
{
    int num;
    printf("Enter number of odd num you want to print: ");
    scanf("%d",&num);
    oddno(num);
    return 0;
}

