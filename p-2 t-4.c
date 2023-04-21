#include<stdio.h>

main()

{
	char ch;
	printf("M Monday\n");
	printf("T Tuesday\n");
	printf("W Wednesday\n");
	printf("t Thursday\n");
	printf("F Friday\n");
	printf("S Saturday\n");
	printf("s Sunday\n");
	printf("Chose any alphabet of above=");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'M' :
			     printf("Monday");
			     break;
			   
		case 'T' :
			     printf("Tuesday");
			     break;
			   
		case 'W' :
			     printf("Wednesday");
			     break;
			   
		case 't' :
			     printf("Thursday");
			     break;
			   
		case 'F' :
			     printf("Friday");
			     break;
			   
		case 'S' :
			     printf("Saturday");
			     break;
			   
		case 's' :
			     printf("Sunday");
			     break;
			   
	    default :
		        printf("Plz Enter Valid Choice");			   	   	   	   	   	   	   
	}
}
