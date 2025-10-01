#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter number a \n");
    scanf("%d",&a);
    printf("enter number b \n");
    scanf("%d",&b);
    printf("enter number c\n");
    scanf("%d",&c);
    int x,y,z;
    x=a>b ? a:b;
    y=b>c ? b:c;
    z=x>=y ? x:y;
    printf("biggest number is %d ",z);
    return 0;
}