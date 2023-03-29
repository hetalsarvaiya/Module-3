
// 	WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>
main()
{
	int a,b,c;
	char ch;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("using any choice operator : ");
	scanf(" %c",&ch);
	
	printf("Enter second number : ");
	scanf("%d",&b);
	
	switch(ch)
		{
		case '+' :
		    c=a+b;
			printf("Sum=%d",c);
			break;
			
			case '-' :
			    c=a-b;
				printf("Sub=%d",c);
			    break;
			
			      case '*' :
				  c=a*b;
			      printf("Mul=%d",c);
			      break;
			
		           	case '/' :
					   c=a/b;
			           printf("Div=%d",c);
			           break;
			          
			                case '%' :
					        c=a%b;
			                printf("Mod=%d",c);
			                break;
			
			            
			                default :
			             	printf("Invalid value");
			            	break;
		}
}
