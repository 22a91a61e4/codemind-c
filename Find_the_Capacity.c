#include<stdio.h>
int main()
{
    int n,i,s,t,b,c=1;
   // scanf("%d",&c,&n);
    int a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        c=c*a[i];
    }
    printf("%dKB",c);
    
}