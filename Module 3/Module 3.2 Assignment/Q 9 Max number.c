
// 	Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
main()
{
	int i,num,n,max=0;
	
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("enter the number : ");
	    scanf("%d",&num);
	
	   if(num>max)
	   {
	   	max=num;
	   } 
	}
	printf("Max number is : %d",max);
}
