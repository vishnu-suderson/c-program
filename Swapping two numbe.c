#include<stdio.h>
int main(){
	int first, second,temp;
	printf("enter first number:");
	scanf("%d", &first);
	printf("enter second number: ");
	scanf("%d,&second");
	temp=first;
	first=second;
	second=temp;
	printf("\n after swaping , first number=%d\n",first);
	printf("after swapping ,second number=%d",second);
	return 0;
}
