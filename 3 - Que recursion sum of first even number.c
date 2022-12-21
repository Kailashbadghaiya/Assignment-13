#include<stdio.h>
#include<conio.h>
int sum(int n)
{
    if(n != 0)
        return 2*n+sum(n-1);
        else
        return n ;
}
int main()
{
    int num ;

    printf("Enter a number\n");
    scanf("%d",&num);

    printf("sum=%d",sum(num));
    return 0;
}
