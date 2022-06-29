#include<stdio.h>
int main()
{
    int n,r,pali=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        r=n%10;
        pali=pali*10+r;
        n/=10;
    }
    if(temp==pali)
    printf("True");
    else
    printf("False");
    return 0;
}