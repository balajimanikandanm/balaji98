#include<stdio.h>
void main()
{
int a,i,s=0;
printf("enter the limit");
scanf("%d",&a);
for(i=1;i<a;i++)
s+=i;
printf("the sum of numbers is %d",s);
getch();
}


