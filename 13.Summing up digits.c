#include<stdio.h>
int main()
{
	int n,sum=0,m;
	printf("enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
		n=n%10;
		sum=sum+n;
		n=n/10;
	}
printf("sum os = %d",sum);
return 0;
}
