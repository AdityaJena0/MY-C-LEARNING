#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
    float radius,area,circumference;
    printf("\n Enter the radius of a circle: ");
    scanf("%f",&radius);
    area=PI*radius*radius;
    circumference=2*PI*radius;
    printf("Area of the circle = %.2f\n",area);
    printf("Circumference of the circle = %.2f\n",circumference);
    getch();
    return 0;
}