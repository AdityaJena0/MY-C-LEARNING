#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a,b;
    printf("\nEnter any two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nSum=%d",a+b);
    printf("\nDifference=%d",a-b);
    printf("\nProduct=%d",a*b);
    printf("\nQuotient=%d",a/b);
    printf("\nRemainder=%d",a%b);
    getch();
}