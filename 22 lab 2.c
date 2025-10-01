#include<stdio.h>
//calculating factorial of given number
int main()
{
	int num,factorial;
	printf("Enter number a \n");
    scanf("%d",&num);
    for(factorial=1;num>0;num=num-1)
    {
         factorial=factorial*num;
    }
    printf("factorial value of a is %d",factorial);
	return 0;
}
    