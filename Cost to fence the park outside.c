#include<stdio.h>
int main()
{
    int L,B,W,C,f_area;
    scanf("%d%d%d%d",&L,&B,&W,&C);
   f_area=((L+2*W)*(B+2*W))-(L*B);
        printf("%d",f_area*C);
    return 0;
}