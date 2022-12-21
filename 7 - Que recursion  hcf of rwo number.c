#include<stdio.h>
#include<conio.h>
int HCF(int n1,int n2)
{
    if(n2 == 0)
        return n1 ;
    else
        return HCF(n2,n1%n2);
}
int main()
{
    int n1,n2 ;

    printf("Enter a 2 number\n");
    scanf("%d%d",&n1,&n2);

    printf("HCF = %d",HCF(n1,n2));
    return 0;
}
