
#include<stdio.h>
int main(){
int i,n;
i=1;
printf("Press enter to start running sequences...\n");
getch();
while(i<=7)
    {printf("%i\t",i*10); i++;}
    printf("Press enter to see next sequence....");
getch();
printf("\n");
for(i=1;i<=7;i++)
printf("%d\t ", -i*10);printf("Press enter to see next sequence....");
getch();
printf("\n");
for(i=1,n=1;i<=5;i++){
printf("%d\t",n);
n=n*10+1;}printf("Press enter to see next sequence....");
getch();
printf("\n");
for(i=1,n=1;i<=6;i++){
    printf("%d\t",n);
    n+=i;}printf("Press enter to see next sequence....");
getch();
printf("\n");
for(i=1,n=10;i<=6;i++){
    printf("%d\t",n);
    n-=3;}printf("Press enter to see next sequence....");
getch();
printf("\n");
for(i=1,n=1;i<=6;i++){


        printf("%d\t",n);
         n=n*2;}printf("Press enter to exit....");
getch();


return 0;
}

