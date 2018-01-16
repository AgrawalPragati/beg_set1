#include<stdio.h>
void main()
{
	int n,k,i,a[100],sum=0;
	scanf("%d%d",&n,&k);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
  }
	for(i=0;i<k;i++)
	{
		sum=sum+a[i];
	}
	
  printf("sum is %d",sum);
}
