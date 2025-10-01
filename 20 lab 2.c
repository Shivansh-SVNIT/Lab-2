#include<stdio.h>
//basic calculator
int main()
{
	float a,b;
	printf("Enter number a \n");
    scanf("%f",&a);
    char c;
    printf("Select Opration,+,*,-,/ \n");
    scanf(" %c",&c);
    if(c=='+' || c=='-' || c=='*' || c=='/')
    {
         printf("Enter number b \n");
         scanf("%f",&b);
         switch(c)
         {
             case '+' : printf("sum of %f and %f is %f",a,b,a+b);
             break;
             case '-' : printf("substraction of %f and %f is %f",a,b,a-b);
             break;
             case '*' : printf("multiplication of %f and %f is %f",a,b,a*b);
             break;
             case '/' : printf("division of %f and %f is %f",a,b,a/b);
             break;
         }
    }
    else
    {
         printf("Wrong opretar selected");
    }
	return 0;
}
