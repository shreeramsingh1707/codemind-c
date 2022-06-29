#include<stdio.h>
int main()
{
    int i,n,even_sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even_sum+=a[i];
        }
    }
    printf("%d",even_sum);
    return 0;
}