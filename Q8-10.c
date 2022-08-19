//8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>
int permutation(int,int);
int permutation(int n, int r)
{
    int i,j,k,denores,numer=1,res=1,totalres=0;
    for(i=1;i<=n;i++)
    {
        numer=numer*i;
    }
    denores=(n-r);
    for(j=1;j<=denores;j++)
    {
        res=res*j;
    }
    totalres=numer/res;
    return totalres;
}
int main()
{
    int num,time,result;
    printf("Enter item number and time: ");
    scanf("%d %d",&num,&time);
    result=permutation(num,time);
    printf("Number of arrangements of %d items at %d time is: %d",num,time,result);
    return 0;
}

