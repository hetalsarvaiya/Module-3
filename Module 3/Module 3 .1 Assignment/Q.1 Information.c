 
 //	Display This Information using printf :	Your Name,Your Birth date,	Your Age ,Your Address
 
#include<stdio.h>
 main()
{
	
	int rno;
	char name[20],address[20],birth_date[20],age[20];
	char mobile[25];
	
	
	printf("Enter name : ");
	scanf("%s",&name);
	
	printf("enter mobile : ");
	scanf("%s",&mobile);
	
	printf("enter rno : ");
	scanf("%d",&rno);
	
	printf("Enter address : ");
	scanf("%s",&address);
	
	printf("Enter birth_date : ");
	scanf("%s",&birth_date);
	
	printf("Enter age : ");
	scanf("%s",&age);
	
	printf("\nname : %s",name);
	printf("\nmobile : %s",mobile);
	printf("\nrno : %d",rno);
	printf("\nyear : %s",birth_date);
	printf("\ndate : %s",age);
	printf("\naddress : %s",address);
	
}
