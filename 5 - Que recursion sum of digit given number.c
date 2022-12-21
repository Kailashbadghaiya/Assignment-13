#include<stdio.h>
#include<conio.h>
int sum(int n)
{
    if( n != 0)
        return (n%10) + sum(n/10);
    else
        return n ;
}
int main()
{
    int num ;

    printf("Enter a number :\n");
    scanf("%d",&num);

    printf("sum = %d",sum(num));
    return 0 ;
}
