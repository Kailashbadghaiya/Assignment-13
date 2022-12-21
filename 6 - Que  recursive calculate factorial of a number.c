#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if(n >=1)
        return n*fact(n-1);
    else
        return 1 ;
}
int main()
{
    int num ;

    printf("Enter a number :\n");
    scanf("%d",&num);

    printf("fact = %d",fact(num));
    return 0;
}
