#include<stdio.h>
int main()
{
int sum=0,i,product,a;
for(i=1;i<=5;i+=1)
{for(a=1,product=1;a<=i;a+=1)product=product*7;
sum+=product;
}
printf("sum of 7,7^2,7^3... series up to 5th term is %d",sum);
getch(); return 0;
}
