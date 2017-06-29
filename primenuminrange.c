#include<conio.h>
#include<stdio.h>
int main()
{
int a,b,i,j,count=0;
printf("enter the two intervals");
scanf("%d %d",&a,&b);
for(i=a;i<b;++i)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
++count;
}
if(count==2)
printf("the prime numbers are: %d ",i);
}
reutrn 0;
}
