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
    if(a>b)
    {
    	if(a>c)
    	{
    		printf("%d is biggest number",a);
		}
		else
		{
		    printf("%d is biggest number",c);
		}
	}
	else
	{
    	if(b>c)
    	{
    		printf("%d is biggest number",b);
		}
		else
		{
		    printf("%d is biggest number",c);
		}
	}
    return 0;
}      
      
