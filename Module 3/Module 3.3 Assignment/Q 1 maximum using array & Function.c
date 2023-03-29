
// 	Write a program to find out the max number from given array using function

#include<stdio.h>
int maxnum();
main()
{
     maxnum();
}

int maxnum()
{
	int a[5],i,max=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the number of a[%d] : ",i);
     	scanf("%d",&a[i]);
    

	    if(a[i]>max)
	    {
	    	max=a[i];
		}
	}
	printf("Max number is : %d",max);
	 return max;
}

