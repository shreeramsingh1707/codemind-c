#include<stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       f=0;
       if(a[i]%2==0){
       f=1;
       }
       else{
           break;
       }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
    return 0;

}