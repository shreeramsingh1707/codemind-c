#include<stdio.h>
int main()
{
    int num,a=0,b=0;
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
    if(num%i==0){
    b=a+i;
    a=b;
    }
    else
    continue;
    }
    if(a==num)
    printf("True");
    else
    printf("False");
    return 0;
}