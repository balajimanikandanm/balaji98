#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,s=0;
printf("enter limit");
scanf("%d",&a);
for(i=1;i<a;i++)
s+=i;
printf("sum is %d",s);
getch();
}
