#include<stdio.h>
 int main()
 {
 	int i,n,sum=0,numbers;
 	float average;
 	
 	printf("enter the range numbers(end limit):\n");
 	 scanf("%d",&n);
 	 printf("\enter the elementsone by one:\n");
 	 for(i=0;i<n;++i)
 	 {
	  scanf("%d",&numbers);
	sum += numbers;
}
   average = sum/n;
   printf("\nsum of the %d numbers =%d",n,sum);
   printf("\naverage of the %d numbers=%f",n, sum);
   return 0;
   
}
