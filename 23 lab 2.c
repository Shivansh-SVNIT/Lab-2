#include<stdio.h>
//calculating power without using header file
int main()
{
	int a,b,ans=1;
	printf("Enter number a \n");
    scanf("%d",&a);
    printf("Enter number b \n");
    scanf("%d",&b);
    while(b>0)
    {
        ans=ans*a;
        b=b-1;
    }
    printf("a to the power b is %d",ans);
}
