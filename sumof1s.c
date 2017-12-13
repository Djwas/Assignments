#include<stdio.h>
int main()
{
float result=0,sum=0,i;
for(i=1;i<=5;i+=1)
{result=result*10+1;
sum+=result;
}
printf("sum of 1,11,111...series up to 5th term is %g",sum);
getch(); return 0;
}
