#include<stdio.h>
//max of 3 numbers
int main()

{
    int a,b,c;
    printf("Enter value of a \n");
    scanf("%d",&a);
    printf("Enter value of b \n");
    scanf("%d",&b);
    printf("Enter value of c \n");
    scanf("%d",&c);
    if(a>b && a>c)
    {
    	printf("%d is biggest number",a);
	}
	if(c>b && a<c)
    {
    	printf("%d is biggest number",c);
	}
	if(a<b && b>c)
    {
    	printf("%d is biggest number",b);
	}
    return 0;
}      
      
