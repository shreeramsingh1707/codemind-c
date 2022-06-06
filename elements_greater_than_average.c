#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,c=0,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    }
    int avg=c/n;
    for(i=0;i<n;i++)
    {
        if(avg<=a[i])
        k++;
    }
    printf("%d",k);
    return 0;
}