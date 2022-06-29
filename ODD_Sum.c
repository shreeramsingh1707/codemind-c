#include<stdio.h>
int main()
{
    int i,n,odd_sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            odd_sum+=a[i];
        }
    }
    printf("%d",odd_sum);
    return 0;
}