#include<stdio.h>
#include<conio.h>
void main(void)
{
    int principle,years;
    float rate,simpleinterest;
    principle = 1000;
    years = 5;
    rate = 8.5;
    simpleinterest = (principle*years*rate)/100;
    printf("\nsimpleinterest=%f",simpleinterest);
    getch();
}


