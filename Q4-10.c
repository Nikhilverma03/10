//4. Write a function to print first N natural numbers (TSRN)

#include<stdio.h>
void Nnaturalno(int);
void Nnaturalno(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}
int main()
{
    int num;
    printf("Enter value of num: ");
    scanf("%d",&num);
    Nnaturalno(num);
    return 0;
}
