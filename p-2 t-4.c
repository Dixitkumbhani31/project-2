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
		case 1 :
			   printf("Monday");
			   break;
			   
		case 2 :
			   printf("Tuesday");
			   break;
			   
		case 3 :
			   printf("Wednesday");
			   break;
			   
		case 4 :
			   printf("Thursday");
			   break;
			   
		case 5 :
			   printf("Friday");
			   break;
			   
		case 6 :
			   printf("Saturday");
			   break;
			   
		case 7 :
			   printf("Sunday");
			   break;
			   
	    default :
		        printf("Plz Enter Valid Choice");			   	   	   	   	   	   	   
	}
}
