#include<stdio.h>
int main()
{
    int n,i,r;
    scanf("%d %d",&n,&r);
    for(i=1;i<=r;)
    {
        printf("%d x %d = %d
",n,i,n*i);
        i=i+2;

    }
    return 0;
}