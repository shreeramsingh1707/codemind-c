#include<stdio.h>
int main(){
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b[n];
    int j=0;
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0){
           b[j]=a[i];
           j++;
       }
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2!=0){
           b[j]=a[i];
           j++;
       }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    
    return 0;
}