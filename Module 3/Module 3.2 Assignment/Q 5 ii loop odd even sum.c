
// 2.	WAP to take 10 no. Input from user and find out …
// 3.	How many Even numbers are there
// 4.	How many odd numbers are there
// 5.	Sum of even numbers
// 6.	Sum of odd numbers WAP to print table up to given numbers
 
#include<stdio.h>
main()
{
	int a[10],n;
	int i,sum=0,odd=0,even=0;
	int SUM_ODD=0, SUM_EVEN=0;
	
	printf("\n Enter the number of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nNumbers-%d: : ",i+1);
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		{
			even++;
			SUM_EVEN +=a[i];
		}
		else
		{
			odd++;
			SUM_ODD +=a[i];
		}
	}
	printf("\nSum of Even number = %d\nSum of Odd number = %d\n",SUM_EVEN,SUM_ODD);
	printf("\nTotal Even number is = %d",even);
	printf("\nTotal Odd number is = %d",odd);
}
