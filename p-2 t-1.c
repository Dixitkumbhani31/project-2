#include<stdio.h>

main()
{
	char ch;
	printf("Enter alphabet=");
	scanf("%c",&ch);
	
	if(ch>='a' & ch<='z')
	{
		printf("%c is small alphabet",ch);
	}
    if(ch>='A' & ch<='Z')
	{
		printf("%c is capital alphabet",ch);
	}
}
