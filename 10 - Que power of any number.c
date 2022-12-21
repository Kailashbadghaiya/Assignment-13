#include<stdio.h>
#include<conio.h>
int pow(int n,int m)
{
    if(m == 1)
        return n ;
        else
        return n*pow(n,m-1) ;
}
int main()
{
    int n1,n2  ;

    printf("Enter a number\n");
    scanf("%d%d",&n1,&n2);

    printf("%d",pow(n1,n2));
    return 0;
}
