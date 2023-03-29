
// 1.	Monday to Sunday using switch case

#include<stdio.h>
main()
{
	int days;
	
	printf("Enter days : ");
	scanf("%d",&days);
	
	switch(days)
	{
		case 1 :
			printf("Sunday");
			break;
			
			case 2 :
				printf("Monday");
				break;
				
				case 3 :
					printf("Tuesday");
					break;
					
					case 4 :
						printf("Wednesday");
					    break;
					    
					    case 5 :
						printf("Thursday");
					    break;
					    
					         case 6 :
						     printf("Friday");
					         break;
					
					                 case 7 :
						             printf("Saturday");
					                 break;
					
					
				default : 
					printf("Enter valid number");
}
}
