
// 	WAP to swap two numbers without using third variable

#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter value a and b : \n");
	scanf("%d %d",&a,&b);
	
	printf("before swapping : \n");
	printf("a=%d,b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nafter swapping : \n ");
	printf("a=%d,b=%d",a,b);
	
}
