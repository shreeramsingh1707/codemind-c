#include<stdio.h>
#include<math.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
         c[i][j]=b[i][j]-a[i][j];
        
     }
    }
    for(i=0;i<n;i++)
    {
     for(j=0;j<n-1;j++)
     {
        printf("%d ",abs(c[i][j]));
     }
     printf("%d",abs(c[i][j]));
     printf("
");
    }
}