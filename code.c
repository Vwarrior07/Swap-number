#include<stdio.h>
#include<conio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("please enter the no: ");
    scanf("%i",&a);
    printf("please enter the no: ");
    scanf("%i",&b);
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("a=%i,b=%i.",x,y);
}