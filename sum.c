#include<stdio.h>
int sum(int a)
{
int tep=0;
while(a>0)
{
tep=tep+a%10;
a=a/10;
}
return tep;
}
int num(int a)
{
int tep=0;
for(int i=1;i<=a;i++)
{
if(i%sum(a)==0)
tep=tep+1;
}
return tep;
}
int main()
{
int n;
int tep=0;
printf("enter a number:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
tep=tep+num(i);
}
printf("%d",tep);
return 0;
}
