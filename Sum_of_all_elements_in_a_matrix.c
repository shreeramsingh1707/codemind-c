#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c,s=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
    }
   printf("%d",s);
}