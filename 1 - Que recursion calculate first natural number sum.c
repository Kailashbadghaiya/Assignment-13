#include<stdio.h>
#include<conio.h>
int sum(int n)
{
    if(n !=0 )
        return n+sum(n-1) ;
        else
            return n ;
}
int main()
{
    int num ;

    printf("Enter a positive integer :");
    scanf("%d",&num);

    printf("sum=%d",sum(num));
    return 0;
}
