
// 	WAP to print factorial of given number

#include<stdio.h>
main()
{
	int i,fact=1,n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial Of Given Number : %d",fact);
}
