//2. Write a function to calculate simple interest. (TSRS)

#include<stdio.h>
int si(int, int, int);
int si(int p, int r, int t)
{
    int s_i;
    s_i=(p*r*t)/100;
    return s_i;
}
int main()
{
    int principle, roi, time;
    float simple_interest;
    printf("Enter principle, roi and time(years): ");
    scanf("%d %d %d",&principle,&roi,&time);
    simple_interest=si(principle, roi, time);
    printf("Simple Interest is %f",simple_interest);
    return 0;
}
