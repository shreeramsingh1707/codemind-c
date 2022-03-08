#include<stdio.h>
int main()
{
    int n,rem,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
        
    }
    if(n%sum==0)
    printf("True");
    else
    printf("False");
    return 0;
    
}