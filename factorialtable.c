#include<stdio.h>
int main(){
int i,n;

printf(" n                n factorial \n");
printf("=================================\n");

for(i=1,n=1;i<=10;i++)
    {
n=n*i;
printf(" %d\t\t\t%d\n",i,n);

}
getch();

return 0;
}

