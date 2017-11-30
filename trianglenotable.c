#include<stdio.h>
int main(){
int i,j,n;

printf("Enter the no up to which you want to generate the table for triangle no: " );
scanf("%i",&j);
printf(" n                triangle no from 1 to %d \n",j);
printf("===============================================\n");
for(i=1;i<=j;i++)
    {
n=(i*i)/2+i/2;
printf (" %d\t\t\t%d\n",i,n);

}
getch();

return 0;
}
