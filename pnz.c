#include<stdio.h>
void main()
{ 
int N;
printf("Enter Number:");
scanf("%d",&N);
if(N>0)
printf("Number is positive");
else if(N<0)
printf("Number is negative");
else
printf("Number is zero");
}
