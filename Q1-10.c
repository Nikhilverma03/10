//1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
int circlearea(int);
int circlearea(int r)
{
    int area;
    area=3.14*(r*r);
    return area;
}
int main()
{
    int radius;
    float ar;
    printf("Enter radius of circle: ");
    scanf("%d",&radius);
    ar=circlearea(radius);
    printf("Area of circle is %f",ar);
    return 0;
}
