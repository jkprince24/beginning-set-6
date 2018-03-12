#include<stdio.h>
#include<conio.h>
int main(void) 
{
int num,rem,rev
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
rev=(rev*10)+rem;
num=num/10
}
num=rev;
while(num!=0)
{
rem=num%10;
printf("%d ",rem);
num=num/10;
}
getch();
return 0;
}
