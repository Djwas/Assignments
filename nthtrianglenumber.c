#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter which triangle number you wish to calculate: ");
scanf("%d",&j);
i=1;
while(i<=j){
    n=(i*i)/2+i/2;
    i++;
}
printf(" The %dth triangle no is %d \n ",j,n);
getch();
return 0;
}
