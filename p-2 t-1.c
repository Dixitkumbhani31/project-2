#include<stdio.h>

main()
{
	char ch;
	printf("Enter alphabet=");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("%c is small alphabet",ch);
	}
    if(ch>='A' && ch<='Z')
	{
		printf("%c is capital alphabet",ch);
	}
	printf("\n\n");



	
	int num;
	printf("Enter number=");
	scanf("%d",&num);
	
	if(num>='1' && num<='9999')
	{
		printf("%d is plus number",num);
	}
	if(num>='-1' && num<='-9999')
	{
		printf("%d is minus number",num);
	}
}
