#include<stdio.h>
//calculating Persentage of 5 subject 
int main()
{
       int physics,chemistry,maths,English,computer;
       printf("Enter marks of physics\n");
       scanf("%d",&physics);
       printf("Enter marks of chimistry\n");
       scanf("%d",&chemistry);
       printf("Enter marks of maths\n");
       scanf("%d",&maths);
       printf("Enter marks of English\n");
       scanf("%d",&English);
       printf("Enter marks of computer\n");
       scanf("%d",&computer);
       printf("Persentage is equal to %d",(physics+chemistry+maths+computer+English)/5);
       return 0;
}
      