#include<stdio.h>
int main(){
int n,a=1;
printf("enter the value of n");
scanf("%d",&n);
int A[n];
for(int i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
for(int i=0;i<n;i++)
{
if(A[i]+A[i+1]==0 || A[i]==0)
{
a=0;
}
}
if(a==1)
{
printf("not true");
}
else
{
printf("true");
}
return 0;
}
