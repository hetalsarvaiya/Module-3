
// 	WAP to find factorial using recursion

#include<stdio.h>
long int number(int n);
main()
{
	int n;
	printf("enter a positive ineger : ");
	scanf("%d",&n);
	printf("Factorial of %d = %d",n,number(n));
	return 0;
}
long int number(int n)
{
	if(n>=1)
	return n*number(n-1);
	else
	return 1;
}
