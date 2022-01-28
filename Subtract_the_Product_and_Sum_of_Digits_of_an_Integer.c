#include<stdio.h>
int main()
{
    int num,product=1,sum=0,rem;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        product=product*rem;
        sum=sum+rem;
        num/=10;
    }
    printf("%d",product-sum);
    return 0;
}