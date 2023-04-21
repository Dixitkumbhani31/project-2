#include<stdio.h>

main()

{
	int num;
	printf("Enter Number=");
	scanf("%d",&num);
	
	(num%2==0) ? printf("%d number is even",num) : printf("%d number is odd",num);
}
