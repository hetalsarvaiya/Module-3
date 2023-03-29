
// 	WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>
main()
{
	int i,n,rem,reverse;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=n;n!=0;n=n/10)
	{
		rem=n%10;
		reverse=reverse*10+rem;
	}
	printf("reverse number=%d",reverse);
}
