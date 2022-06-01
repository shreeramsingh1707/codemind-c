#include<stdio.h>
int main()
{
    int i,n,c=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1<n2){
        for(i=0;i<n;i++)
        {
            if(a[i]<n1 || a[i]>n2)
            c+=a[i];
        }
    }
    else{
        for(i=0;i<n;i++)
        {
            if(a[i]<n2 || a[i]>n1)
            c+=a[i];
        }
    }
    printf("%d",c);
}