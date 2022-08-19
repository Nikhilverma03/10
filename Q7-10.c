//7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>
int combinations(int,int);
int combinations(int n, int r)
{
    int i,j,k,denores,numer=1,res=1,outside=1,totalres=0;
    for(i=1;i<=n;i++)
        numer=numer*i;
    denores=(n-r);
    for(j=1;j<=denores;j++)
        res=res*j;
    for(k=1;k<=r;k++)
        outside=outside*k;
    totalres=numer/(res*outside);
    return totalres;
}
int main()
{
    int num,time,result;
    printf("Enter item number and time: ");
    scanf("%d %d",&num,&time);
    result=combinations(num,time);
    printf("Number of combinations of %d items at %d time is: %d",num,time,result);
    return 0;
}

