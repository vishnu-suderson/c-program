input:-#include<stdio.h>
int main()
{
	int num;
	
	printf("input a number:");
	scanf("%d",&num);
	if (num == 0) {
	    printf("%d is neither a positive, nor a negitive number\n",num);}
	else if (num>=0){
	    printf("%d is a positive number\n",num);}
	else {
	    printf("%d is a negitive number \n",num);}
}
