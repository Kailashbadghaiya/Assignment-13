#include<stdio.h>
#include<conio.h>
int countDigit(int n,int c)
{
    if(n == 0)
        return c ;
    else
    countDigit((n/10),c+1);
}
int main()
{
    int i ;

    printf("Enter a number\n");
    scanf("%d",&i);

    printf("%d",countDigit(i,0));
    return 0;
}
