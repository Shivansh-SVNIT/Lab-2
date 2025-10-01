#include<stdio.h>
//given charector is small latter or not 
int main()
{
	char a;
	printf("Enter cherector a \n");
    scanf("%c",&a);
    int p=a;
    if(a>=97 && a<123)
    {
    	printf("given charector is small latter");
	}
	else
	{
    	printf("given charector is not small latter");
	}
	return 0;
}
